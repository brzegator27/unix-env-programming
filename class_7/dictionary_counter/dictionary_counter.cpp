#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <bits/errno.h>
#include <errno.h>
#include <sys/wait.h>
#include <fcntl.h>

#include "dictionary_counter.h"


int main(int argc, char *argv[])
{
    int pfd_count_lines_in[2], pfd_count_lines_out[2],
            pfd_count_words_with_pipe_in[2], pfd_count_words_with_pipe_out[2];
    pid_t pid_count_lines, pid_count_words_with_pipe;

    if (get_pipe_secure(pfd_count_lines_in) != 0) { goto cleanup; }
    if (get_pipe_secure(pfd_count_lines_out) != 0) { goto cleanup; }
    if (get_pipe_secure(pfd_count_words_with_pipe_in) != 0) { goto cleanup; }
    if (get_pipe_secure(pfd_count_words_with_pipe_out) != 0) { goto cleanup; }


    if (get_pid_secure(pid_count_lines) != 0) { goto cleanup; }
    if (pid_count_lines == 0) {
        close_pfd_secure(pfd_count_words_with_pipe_in);
        close_pfd_secure(pfd_count_words_with_pipe_out);

        close(pfd_count_lines_in[1]);
        close(pfd_count_lines_out[0]);

        manage_child_counting_lines(pfd_count_lines_in[0], pfd_count_lines_out[1]);
        return 0;
    }

    if (get_pid_secure(pid_count_words_with_pipe) != 0) { goto cleanup; }
    if (pid_count_words_with_pipe == 0) {
        close_pfd_secure(pfd_count_lines_in);
        close_pfd_secure(pfd_count_lines_out);

        close(pfd_count_words_with_pipe_in[1]);
        close(pfd_count_words_with_pipe_out[0]);

        manage_child_counting_words_with_pipe(pfd_count_words_with_pipe_in[0], pfd_count_words_with_pipe_out[1]);
        return 0;
    }

    close(pfd_count_lines_in[0]);
    close(pfd_count_lines_out[1]);

    close(pfd_count_words_with_pipe_in[0]);
    close(pfd_count_words_with_pipe_out[1]);

    manage_parent_process(pid_count_lines,
                          pid_count_words_with_pipe,
                          pfd_count_lines_out[0],
                          pfd_count_lines_in[1],
                          pfd_count_words_with_pipe_out[0],
                          pfd_count_words_with_pipe_in[1]);
    return 0;

    cleanup:
    close_pfd_secure(pfd_count_lines_in);
    close_pfd_secure(pfd_count_lines_out);
    close_pfd_secure(pfd_count_words_with_pipe_in);
    close_pfd_secure(pfd_count_words_with_pipe_out);
    return 1;
}

void manage_child_counting_lines(int read_from,
                                 int write_to)
{
    unsigned int number_of_lines = 0;
    char buf[1],
            number_of_lines_str[10];

    while (read(read_from, buf, sizeof(buf)) > 0) {
        if ('\n' == buf[0]) {
            ++number_of_lines;
        }
    }

    snprintf(number_of_lines_str, sizeof(number_of_lines_str), "%d", number_of_lines);
    write(write_to, number_of_lines_str, sizeof(number_of_lines_str));

    close(read_from);
    close(write_to);
}

void manage_child_counting_words_with_pipe(int read_from,
                                           int write_to)
{
    unsigned int words_with_pipe_word = 0;
    char buf[1], word[1024], pipe_word[] = "pipe",
            words_with_pipe_word_str[10];
    int char_pos = 0;

    while (read(read_from, buf, sizeof(buf)) > 0) {
        if (char_pos == 1024) {
            fprintf(stderr, "Word in dictionary too long");
        }
        if (buf[0] == '\n') {
            word[char_pos] = 0;
            char_pos = 0;

            if (strstr(word, pipe_word) != NULL) {
                ++words_with_pipe_word;
            }
        } else {
            word[char_pos++] = buf[0];
        }
    }

    snprintf(words_with_pipe_word_str, sizeof(words_with_pipe_word_str), "%d", words_with_pipe_word);
    write(write_to, words_with_pipe_word_str, sizeof(words_with_pipe_word_str));

    close(read_from);
    close(write_to);
}

void manage_parent_process(int pid_count_lines,
                           int pid_count_words_with_pipe,
                           int count_lines_read_from,
                           int count_lines_write_to,
                           int count_words_with_pipe_read_from,
                           int count_words_with_pipe_write_to)
{
    int wait_pid_status, fd_dictionary;
    char buf[514],
            number_of_lines_str[10], words_with_pipe_word_str[10];
    ssize_t nread = 0;

    if ((fd_dictionary = open("dictionary.txt", O_RDONLY)) == -1) {
        fprintf(stderr, "Error while opening file. Err number: %d", errno);
        goto cleanup;
    }

    while ((nread = read(fd_dictionary, buf, sizeof(buf))) > 0) {
        if (write(count_lines_write_to, buf, strlen(buf)) < 0
            || write(count_words_with_pipe_write_to, buf, strlen(buf)) < 0) {
            fprintf(stderr, "Error while writing file. Err number: %d", errno);
            goto cleanup;
        }
    }
    if (nread == -1) {
        fprintf(stderr, "Error while reading file. Err number: %d", errno);
        goto cleanup;
    }

    close(fd_dictionary);
    close(count_lines_write_to);
    close(count_words_with_pipe_write_to);

    waitpid(pid_count_lines, &wait_pid_status, 0);
    waitpid(pid_count_words_with_pipe, &wait_pid_status, 0);

    read(count_lines_read_from, number_of_lines_str, sizeof(number_of_lines_str));
    read(count_words_with_pipe_read_from, words_with_pipe_word_str, sizeof(words_with_pipe_word_str));

    printf("lines no.: %s\n", number_of_lines_str);
    printf("Words with \"pipe\" word: %s\n", words_with_pipe_word_str);

    close(count_lines_read_from);
    close(count_words_with_pipe_read_from);
    return;

    cleanup:
    if (fd_dictionary != -1) {
        close(fd_dictionary);
    }
    close(count_lines_write_to);
    close(count_words_with_pipe_write_to);
    close(count_lines_read_from);
    close(count_words_with_pipe_read_from);
}

void close_pfd_secure(int pfd[])
{
    if (pfd[0] != -1) {
        close(pfd[0]);
    }
    if (pfd[1] != -1) {
        close(pfd[1]);
    }
}

int get_pipe_secure(int pfd[])
{
    int e;

    if ((pipe(pfd)) == -1) {
        e = errno;
        fprintf(stderr, "Error while creating pipe; error: %s\n", strerror(e));
        return e;
    }

    return 0;
}

int get_pid_secure(int &pid)
{
    int e;

    if ((pid = fork()) == -1) {
        e = errno;
        fprintf(stderr, "Error while forking; error: %s\n", strerror(e));
        return e;
    }

    return 0;
}