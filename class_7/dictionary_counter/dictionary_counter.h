#ifndef UNIX_ENV_PROGRAMMING_DICTIONARY_COUNTER_H
#define UNIX_ENV_PROGRAMMING_DICTIONARY_COUNTER_H

void manage_seq(int read_from,
                int write_to);

void manage_multiplier(int read_from,
                       int write_to);

void manage_parent_process(int pid_count_lines,
                           int pid_count_words_with_pipe,
                           int count_lines_read_from,
                           int count_lines_write_to,
                           int count_words_with_pipe_read_from,
                           int count_words_with_pipe_write_to);

void close_pfd_secure(int pfd[]);

int get_pipe_secure(int pfd[]);

int get_pid_secure(int &pid);

#endif //UNIX_ENV_PROGRAMMING_DICTIONARY_COUNTER_H
