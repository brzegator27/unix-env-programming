#ifndef UNIX_ENV_PROGRAMMING_I_WANT_MORE_PIPES_H
#define UNIX_ENV_PROGRAMMING_I_WANT_MORE_PIPES_H

#define PROGRAMS_NUMBER 5

void manage_more_pipes();

pid_t run_proper_program(short program_no,
                         pid_t previous_program_pid,
                         int pfd_read_from,
                         int pfd_write_to,
                         int pfd_close_1,
                         int pfd_close_2);

void manage_parent_process(int pid_count_lines,
                           int pid_count_words_with_pipe,
                           int count_lines_read_from,
                           int count_lines_write_to,
                           int count_words_with_pipe_read_from,
                           int count_words_with_pipe_write_to);


#endif //UNIX_ENV_PROGRAMMING_I_WANT_MORE_PIPES_H
