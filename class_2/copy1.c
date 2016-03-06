/*
 * copy1.c
 *
 * based on:
 *
 * Miscellaneous examples for Chap. 2
 * AUP2, Chap. 2
 *
 * modified by WTA
 */

/*[copy-with-bug]*/

#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <errno.h>

#define BUFSIZE 512

void manage_open_err() {
    switch (errno) {
        case EACCES:
            fprintf(stderr, "From man: The  requested  access  to the file is not allowed, "
                    "or search permission is denied for one of the directories in "
                    "the path prefix of\n"
                    "pathname, or the file did not exist yet and write "
                    "access to the parent directory is not allowed.");
            break;

        case ENOENT:
            fprintf(stderr, "O_CREAT is not set and the named file does not exist.  "
                    "Or, a directory component in pathname does not exist or is a  "
                    "dangling  sym‐\n"
                    "bolic link. \n");
            break;
        default:
            fprintf(stderr, "Some error occurred!");
    }
}

ssize_t writeall(int fd, const void *buf, size_t nbyte) {
    ssize_t nwritten = 0, n;

    do {
        if ((n = write(fd, &((const char *) buf)[nwritten], nbyte - nwritten)) == -1) {
            if (errno == EINTR)
                continue;
            else
                return -1;
        }
        nwritten += n;
    } while (nwritten < nbyte);
    return nwritten;
}

void copy(char *from, char *to)  /* has a bug */
{
    int fromfd = -1, tofd = -1;
    ssize_t nread;
    char buf[BUFSIZE];

    if ((fromfd = open(from, O_RDONLY)) == -1) {
        manage_open_err();
        goto cleanup;
    }


    if ((tofd = open(to, O_WRONLY | O_CREAT | O_TRUNC,
                     S_IRUSR | S_IWUSR)) == -1) {
        manage_open_err();
        goto cleanup;
    }

    while ((nread = read(fromfd, buf, sizeof(buf))) > 0) {
        if (write(tofd, buf, nread) == -1) {
            fprintf(stderr, "Error during writing.");
            goto cleanup;
        }
    }
    if (nread == -1) {
        fprintf(stderr, "Error during reading file.");
        goto cleanup;
    }

    cleanup:
    if (fromfd != -1)
        close(fromfd);
    if (tofd != -1)
        close(tofd);

    return;
}

int main(int argc, char **argv) {
    if (argc != 3) {
        fprintf(stderr, "usage: %s from_pathname to_pathname\n", argv[0]);
        return 1;
    }
    copy(argv[1], argv[2]);
    return 0;
}
