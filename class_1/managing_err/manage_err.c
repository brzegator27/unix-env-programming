#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>

#include "t.h"

#define BUFSIZE 1024

int try_read_from_file(char *program_name, char* pathname);

int main(int argc, char **argv)
{
    if (argc != 2) {
        fprintf(stderr, "usage: %s pathname\n", argv[0]);
        return 1;
    }

    return try_read_from_file(argv[0], argv[1]);
}

int try_read_from_file(char *program_name, char* pathname)
{
    int file, e;
    size_t count = BUFSIZE;
    ssize_t read_count;
    char buf[BUFSIZE];

    timestart();
    if ((file = open(pathname, O_RDONLY)) == -1) {
        e = errno;
        fprintf(stderr, "Error while opening file: %s\n", strerror(e));
        goto cleanup;
    }

    if ((read_count = read(file, buf, count)) == -1) {
        e = errno;
        fprintf(stderr, "Error while reading file: %s\n", strerror(e));
        goto cleanup;
    }
    sleep(1);
    timestop("End of reading a file");

    printf("%s: Read %d characters from file %s: \"%s\"\n",
           program_name, (int)read_count, pathname, buf);

    close(file);
    return 0;

    cleanup:
    if (file != -1) {
        close(file);
    }
    return 1;
}