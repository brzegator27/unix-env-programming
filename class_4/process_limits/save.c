#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/resource.h>

#include <stdio.h>

#define BUFSIZE 5

int set_soft_rlimit_fsize(rlim_t new_fs_limit)
{
    int e;
    struct rlimit new_rlimit;

    new_rlimit.rlim_cur = new_fs_limit;
    new_rlimit.rlim_max = RLIM_SAVED_MAX;

    if (setrlimit(RLIMIT_FSIZE, &new_rlimit) == -1) {
        e = errno;
        fprintf(stderr, "Error setting new rlimit; error: %s\n", strerror(e));
        return e;
    }

    return 0;
}

int write_rlimit_fsize()
{
    int e;
    struct rlimit limit;

    if (getrlimit(RLIMIT_FSIZE, &limit) == -1) {
        e = errno;
        fprintf(stderr, "Error while getting rlimit info; error: %s\n", strerror(e));
        return e;
    }
    if (printf("RLIMIT_FSIZE: cur=%d, max=%d\n", (int) limit.rlim_cur, (int) limit.rlim_max) < 0) {
        e = errno;
        fprintf(stderr, "Error while writing rlimit info; error: %s\n", strerror(e));
        return e;
    }
    if (fflush(stdout) == EOF) {
        e = errno;
        fprintf(stderr, "Error while fflush; error: %s\n", strerror(e));
        return e;
    }

    return 0;
}

int write_bytes_to_file(char *filename, int bytes)
{
    char buf[BUFSIZE] = {'a', 'a', 'a', 'a', 'a'};
    int e, to_write, written_all_bytes = 0, fd;
    ssize_t wrote;

    printf("Writing %d bytes into %s file...\n", bytes, filename);

    if ((fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC)) == -1) {
        e = errno;
        fprintf(stderr, "Error while opening file to write to; error: %s\n", strerror(e));
        goto close_file;
    }

    do {
        to_write = bytes - written_all_bytes;
        to_write = to_write < BUFSIZE ? to_write : BUFSIZE;

        wrote = write(fd, buf, to_write);

        written_all_bytes += wrote;

        if (wrote == -1) {
            e = errno;
            fprintf(stderr, "Error while writing; error: %s\n", strerror(e));
            goto close_file;
        }
    }
    while ((wrote > 0) && (written_all_bytes < bytes));

    return 0;

    close_file:
    if (fd != -1) {
        close(fd);
    }
    return e;
}

int main(int argc, char *argv[])
{
    if (argc < 2 || argc > 3) {
        fprintf(stderr, "usage: %s [bytes] pathname\n", argv[0]);
        return 1;
    }

    char *filename = argc == 2 ? argv[1] : argv[2];
    int smin = 0, smax = 10000, sdef = 100, s = argc == 2 ? sdef : atoi(argv[1]);

    if ((s < smin) || (s > smax)) { s = sdef; }

    if (write_rlimit_fsize() != 0) { return 1; }
    if (set_soft_rlimit_fsize(50) != 0) { return 1; }
    if (write_bytes_to_file(filename, s) != 0) { return 1; }

    return 0;
}
