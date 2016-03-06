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

void copy(char *from, char *to)  /* has a bug */
{
    int fromfd = -1, tofd = -1;
    ssize_t nread;
    char buf[BUFSIZE];

    if ((fromfd = open(from, O_RDONLY)) == -1) {
        switch(errno) {
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

        return;
    }


    tofd = open(to, O_WRONLY | O_CREAT | O_TRUNC,
                S_IRUSR | S_IWUSR);

    while ((nread = read(fromfd, buf, sizeof(buf))) > 0) {
        write(tofd, buf, nread);
    }

    close(fromfd);
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
