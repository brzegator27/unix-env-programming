#include <stdio.h>
#include <errno.h>
#include <fcntl.h>
#include <unistd.h>


void tail(char *path) {
    const int read_lines_limit = 10, buf_limit = 256;
    char buf[buf_limit], c;
    int fd, new_lines_no = 0;
    off_t file_end_offset, ten_lines_offset = 1;
    ssize_t nread;

    fd = open(path, O_RDONLY);
    file_end_offset = lseek(fd, 0, SEEK_END);

    do {
        switch (pread(fd, &c, 1, file_end_offset - ten_lines_offset)) {
            case 1:
                if (c == '\n' && ten_lines_offset != 1) {
                    ++new_lines_no;
                }
                ++ten_lines_offset;

                break;
            case -1:
                fprintf(stderr, "Error while reading file. Err number: %d", errno);
                goto cleanup;
        }
    } while (file_end_offset - ten_lines_offset > 0 && read_lines_limit > new_lines_no);

    if(file_end_offset - ten_lines_offset != 0)
        ten_lines_offset -= 2;

    lseek(fd, file_end_offset - ten_lines_offset, SEEK_SET);
    while ((nread = read(fd, buf, sizeof(buf))) > 0) {
        if (fprintf(stdout, buf) < 0) {
            fprintf(stderr, "Error while writing file. Err number: %d", errno);
            goto cleanup;
        }
    }
    if (nread == -1) {
        fprintf(stderr, "Error while reading file. Err number: %d", errno);
        goto cleanup;
    }

    cleanup:
    if (fd != -1)
        close(fd);
    return;
}

int main(int argc, char **argv) {
    if (argc != 2) {
        fprintf(stderr, "Bad args number!");
        return 1;
    }

    tail(argv[1]);
    return 0;
}