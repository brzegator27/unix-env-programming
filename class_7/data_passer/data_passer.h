#ifndef UNIX_ENV_PROGRAMMING_DATA_PASSER_H
#define UNIX_ENV_PROGRAMMING_DATA_PASSER_H

void manage_multiplier(int read_from,
                       int write_to);

void manage_parent_process(int pid_seq,
                           int pid_multiplier,
                           int read_from);

void close_pfd_secure(int pfd[]);

int get_pipe_secure(int pfd[]);

int get_pid_secure(int &pid);

#endif //UNIX_ENV_PROGRAMMING_DATA_PASSER_H
