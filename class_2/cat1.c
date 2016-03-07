#include <stdio.h>
#include <errno.h>
#include <fcntl.h>
#include <unistd.h>

int write_to(int fd_from) {
    char buf[514];
    ssize_t nread = 0;

    while ((nread = read(fd_from, buf, sizeof(buf))) > 0) {
        if (fprintf(stdout, buf) < 0) {
            fprintf(stderr, "Error while writing file. Err number: %d", errno);
            goto cleanup;
        }
    }
    if (nread == -1) {
        fprintf(stderr, "Error while reading file. Err number: %d", errno);
        goto cleanup;
    }

    return 0;

    cleanup:
    return -1;
}

int show_file(char *file_name) {
    int fd = -1;

    if ((fd = open(file_name, O_RDONLY)) == -1) {
        fprintf(stderr, "Error while opening file. Err number: %d", errno);
        goto cleanup;
    }

    if (write_to(fd) == -1) {
        goto cleanup;
    }

    close(fd);
    return 0;

    cleanup:
    if (fd != -1)
        close(fd);
    return -1;
}

int show_without_file() {
    if (write_to(STDIN_FILENO) == -1) {
        goto cleanup;
    }

    return 0;

    cleanup:
    return -1;
}

int main(int argc, char **argv) {

    if (argc > 2) {
        fprintf(stderr, "Bad args!");
        return 1;
    }

    if (argc == 2) {
        return show_file(argv[1]);
    } else {
        return show_without_file();
    }
}