#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <sys/wait.h>
#include <stdlib.h>

#include "data_passer.h"a


int main(int argc, char *argv[])
{
    int pdf_seq[2], pdf_multiplier[2];
    pid_t pid_seq, pid_multiplier;

    if (get_pipe_secure(pdf_seq) != 0) { goto cleanup; }
    if (get_pipe_secure(pdf_multiplier) != 0) { goto cleanup; }

    if (get_pid_secure(pid_seq) != 0) { goto cleanup; }
    if (pid_seq == 0) {
        close_pfd_secure(pdf_multiplier);
        close(pdf_seq[0]);

        dup2(pdf_seq[1], STDOUT_FILENO);

        int e = execlp("seq", "seq", "1", "10", NULL);
        fprintf(stderr, "%d", e);
        return 0;
    }

    if (get_pid_secure(pid_multiplier) != 0) { goto cleanup; }
    if (pid_multiplier == 0) {
        close(pdf_seq[1]);
        close(pdf_multiplier[0]);

        manage_multiplier(pdf_seq[0], pdf_multiplier[1]);
        return 0;
    }

    close_pfd_secure(pdf_seq);
    close(pdf_multiplier[1]);

    manage_parent_process(pid_seq, pid_multiplier, pdf_multiplier[0]);
    return 0;

    cleanup:
    close_pfd_secure(pdf_seq);
    close_pfd_secure(pdf_multiplier);
    return 1;
}

void manage_multiplier(int read_from,
                       int write_to)
{
    int number = 0;
    char buf[1], number_str[128], new_line[] = "\n";
    int char_pos = 0;

    while (read(read_from, buf, sizeof(buf)) > 0) {
        if (char_pos == 128) {
            fprintf(stderr, "Number too long");
        }
        if (buf[0] == '\n') {
            number_str[char_pos] = 0;
            char_pos = 0;

            number = atoi(number_str);
            number = number * 5;
            snprintf(number_str, 10, "%d", number);

            write(write_to, number_str, strlen(number_str));
            write(write_to, new_line, strlen(new_line));
        } else {
            number_str[char_pos++] = buf[0];
        }
    }

    close(read_from);
    close(write_to);
}

void manage_parent_process(int pid_seq,
                           int pid_multiplier,
                           int read_from)
{
    int wait_pid_status;
    char buf[514];

    waitpid(pid_seq, &wait_pid_status, 0);
    waitpid(pid_multiplier, &wait_pid_status, 0);

    while (read(read_from, buf, sizeof(buf)) > 0) {
        fprintf(stdout, buf);
    }

    close(read_from);
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