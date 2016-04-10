#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <bits/errno.h>
#include <errno.h>
#include <sys/wait.h>

void manage_child_process(int pfd[]);
void manage_parent_process(int pid, int pfd[]);

int main(int argc, char *argv[])
{
    int pfd[2], e;
    pid_t pid;

    if ((pipe(pfd)) == -1) {
        e = errno;
        fprintf(stderr, "Error while creating pipe; error: %s\n", strerror(e));
        goto cleanup;
    }

    if ((pid = fork()) == -1) {
        e = errno;
        fprintf(stderr, "Error while forking; error: %s\n", strerror(e));
        goto cleanup;
    }

    switch (pid) {
        case 0:
            manage_child_process(pfd);
            return 0;
        default:
            manage_parent_process(pid, pfd);
            return 0;
    }

    cleanup:
    if (pfd[0] != -1) {
        close(pfd[0]);
    }
    if (pfd[1] != -1) {
        close(pfd[1]);
    }
    return 1;
}

void manage_child_process(int pfd[]) {
    char buf[100];
    ssize_t nread;

    close(pfd[1]);
    dup2(pfd[0], STDIN_FILENO);

    nread = read(STDIN_FILENO, buf, sizeof(buf));
    if (nread != 0) {
        printf("%s (%ld bytes)\n", buf, (long) nread);
    } else {
        printf("No data\n");
    }
    close(pfd[0]);
}

void manage_parent_process(int pid, int pfd[]) {
    char str[] = "Ur beautiful pipe example";
    int wait_pid_status;

//    fprintf(stdout, "%s", str);
//    fflush(stdout);
    close(pfd[0]);
    dup2(pfd[1], STDOUT_FILENO);

    fprintf(stdout, "%s", str);
    fflush(stdout);     // Without this PROBABLY stdout(pfd[1]) will be closed before writing
//    write(STDOUT_FILENO, str, strlen(str));

    close(pfd[1]);
    waitpid(pid, &wait_pid_status, 0);
}