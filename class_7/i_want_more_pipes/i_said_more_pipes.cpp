#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <bits/errno.h>
#include <errno.h>
#include <sys/wait.h>
#include <fcntl.h>

#include "i_said_more_pipes.h"


int main(int argc, char *argv[])
{
    manage_more_pipes();

    return 0;
}

void manage_more_pipes()
{
    int pfd_current[2], pfd_previous[2];
    pid_t previous_program_pid = -1;
    int e;

    pfd_previous[0] = -1;
    pfd_previous[1] = -1;

    for (short program_no = 0; program_no < PROGRAMS_NUMBER; ++program_no) {
        if (program_no == 1) {
            continue;
        }
        bool last_program = program_no == PROGRAMS_NUMBER - 1;

        if (last_program) {
            pfd_current[0] = -1;
            pfd_current[1] = -1;
        }
        if (!last_program && (pipe(pfd_current)) == -1) {
            e = errno;
            fprintf(stderr, "Error while creating pipe; error: %s\n", strerror(e));
            return;
        }
        previous_program_pid = run_proper_program(program_no,
                                                  previous_program_pid,
                                                  pfd_previous[0],
                                                  pfd_current[1],
                                                  pfd_previous[1],
                                                  pfd_current[0]);

        if (pfd_previous[0] != -1) {
            close(pfd_previous[0]);
        }
        if (pfd_previous[1] != -1) {
            close(pfd_previous[1]);
        }

        pfd_previous[0] = pfd_current[0];
        pfd_previous[1] = pfd_current[1];
    }
}

pid_t run_proper_program(short program_no,
                         pid_t previous_program_pid,
                         int pfd_read_from,
                         int pfd_write_to,
                         int pfd_close_1,
                         int pfd_close_2)
{
    int e = 0, wait_pid_status;
    pid_t pid;

    if (previous_program_pid != -1) {
        waitpid(previous_program_pid, &wait_pid_status, 0);
    }
    fprintf(stderr, "Program no: %d\n", program_no);
    if ((pid = fork()) == -1) {
        e = errno;
        fprintf(stderr, "Error while forking; error: %s\n", strerror(e));
        return -1;
    }

    if (pid != 0) {
        return pid;
    }

    if (pfd_close_1 != -1) {
        close(pfd_close_1);
    }
    if (pfd_close_2 != -1) {
        close(pfd_close_2);
    }
    if (pfd_read_from != -1) {
        fprintf(stderr, "IN Program no: %d pfd: %d\n", program_no, pfd_read_from);
        dup2(pfd_read_from, STDIN_FILENO);
    }
    if (pfd_write_to != -1) {
        fprintf(stderr, "OUT Program no: %d pfd: %d\n", program_no, pfd_write_to);
        dup2(pfd_write_to, STDOUT_FILENO);
    }

//     who | cut -d' ' -f1 | sort | uniq -c | sort -r
    switch (program_no) {
        case 0:
            e = execlp("who", "who", NULL);
            break;
        case 1:
            e = execlp("cut", "cut", "-d", "\\ ", "-f1", NULL);
            break;
        case 2:
            e = execlp("sort", "sort", NULL);
            break;
        case 3:
            e = execlp("uniq", "uniq", "-c", NULL);
            break;
        case 4:
            e = execlp("sort", "sort", "-r", NULL);
            break;
        default:
            fprintf(stderr, "Bad program number!");
    }

    if (e != 0) {
        fprintf(stderr, "%d", e);
    }
    return -1;
}
