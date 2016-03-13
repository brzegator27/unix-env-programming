#include <stdio.h>
#include <unistd.h>
#include <limits.h>
#include <errno.h>
int main(void) {
long r;
#ifdef _SC_ARG_MAX
errno = 0;
r = sysconf(_SC_ARG_MAX);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_ARG_MAX is invalid.\n");
                } else {
                    printf("The _SC_ARG_MAX has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_ARG_MAX is %d\n", (int)r);
  }
#else
printf("The _SC_ARG_MAX is undefined.\n");
#endif
#ifdef _SC_CHILD_MAX
errno = 0;
r = sysconf(_SC_CHILD_MAX);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_CHILD_MAX is invalid.\n");
                } else {
                    printf("The _SC_CHILD_MAX has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_CHILD_MAX is %d\n", (int)r);
  }
#else
printf("The _SC_CHILD_MAX is undefined.\n");
#endif
#ifdef _SC_CLK_TCK
errno = 0;
r = sysconf(_SC_CLK_TCK);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_CLK_TCK is invalid.\n");
                } else {
                    printf("The _SC_CLK_TCK has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_CLK_TCK is %d\n", (int)r);
  }
#else
printf("The _SC_CLK_TCK is undefined.\n");
#endif
#ifdef _SC_NGROUPS_MAX4
errno = 0;
r = sysconf(_SC_NGROUPS_MAX4);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_NGROUPS_MAX4 is invalid.\n");
                } else {
                    printf("The _SC_NGROUPS_MAX4 has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_NGROUPS_MAX4 is %d\n", (int)r);
  }
#else
printf("The _SC_NGROUPS_MAX4 is undefined.\n");
#endif
#ifdef _SC_OPEN_MAX
errno = 0;
r = sysconf(_SC_OPEN_MAX);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_OPEN_MAX is invalid.\n");
                } else {
                    printf("The _SC_OPEN_MAX has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_OPEN_MAX is %d\n", (int)r);
  }
#else
printf("The _SC_OPEN_MAX is undefined.\n");
#endif
#ifdef _SC_JOB_CONTROL6
errno = 0;
r = sysconf(_SC_JOB_CONTROL6);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_JOB_CONTROL6 is invalid.\n");
                } else {
                    printf("The _SC_JOB_CONTROL6 has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_JOB_CONTROL6 is %d\n", (int)r);
  }
#else
printf("The _SC_JOB_CONTROL6 is undefined.\n");
#endif
#ifdef _SC_SAVED_IDS
errno = 0;
r = sysconf(_SC_SAVED_IDS);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_SAVED_IDS is invalid.\n");
                } else {
                    printf("The _SC_SAVED_IDS has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_SAVED_IDS is %d\n", (int)r);
  }
#else
printf("The _SC_SAVED_IDS is undefined.\n");
#endif
#ifdef _SC_VERSION
errno = 0;
r = sysconf(_SC_VERSION);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_VERSION is invalid.\n");
                } else {
                    printf("The _SC_VERSION has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_VERSION is %d\n", (int)r);
  }
#else
printf("The _SC_VERSION is undefined.\n");
#endif
#ifdef _SC_PASS_MAX
errno = 0;
r = sysconf(_SC_PASS_MAX);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_PASS_MAX is invalid.\n");
                } else {
                    printf("The _SC_PASS_MAX has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_PASS_MAX is %d\n", (int)r);
  }
#else
printf("The _SC_PASS_MAX is undefined.\n");
#endif
#ifdef _SC_LOGNAME_MAX
errno = 0;
r = sysconf(_SC_LOGNAME_MAX);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_LOGNAME_MAX is invalid.\n");
                } else {
                    printf("The _SC_LOGNAME_MAX has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_LOGNAME_MAX is %d\n", (int)r);
  }
#else
printf("The _SC_LOGNAME_MAX is undefined.\n");
#endif
#ifdef _SC_PAGESIZE
errno = 0;
r = sysconf(_SC_PAGESIZE);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_PAGESIZE is invalid.\n");
                } else {
                    printf("The _SC_PAGESIZE has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_PAGESIZE is %d\n", (int)r);
  }
#else
printf("The _SC_PAGESIZE is undefined.\n");
#endif
#ifdef _SC_XOPEN_VERSION
errno = 0;
r = sysconf(_SC_XOPEN_VERSION);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_XOPEN_VERSION is invalid.\n");
                } else {
                    printf("The _SC_XOPEN_VERSION has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_XOPEN_VERSION is %d\n", (int)r);
  }
#else
printf("The _SC_XOPEN_VERSION is undefined.\n");
#endif
#ifdef _SC_NPROCESSORS_CONF
errno = 0;
r = sysconf(_SC_NPROCESSORS_CONF);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_NPROCESSORS_CONF is invalid.\n");
                } else {
                    printf("The _SC_NPROCESSORS_CONF has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_NPROCESSORS_CONF is %d\n", (int)r);
  }
#else
printf("The _SC_NPROCESSORS_CONF is undefined.\n");
#endif
#ifdef _SC_NPROCESSORS_ONLN
errno = 0;
r = sysconf(_SC_NPROCESSORS_ONLN);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_NPROCESSORS_ONLN is invalid.\n");
                } else {
                    printf("The _SC_NPROCESSORS_ONLN has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_NPROCESSORS_ONLN is %d\n", (int)r);
  }
#else
printf("The _SC_NPROCESSORS_ONLN is undefined.\n");
#endif
#ifdef _SC_STREAM_MAX
errno = 0;
r = sysconf(_SC_STREAM_MAX);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_STREAM_MAX is invalid.\n");
                } else {
                    printf("The _SC_STREAM_MAX has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_STREAM_MAX is %d\n", (int)r);
  }
#else
printf("The _SC_STREAM_MAX is undefined.\n");
#endif
#ifdef _SC_TZNAME_MAX
errno = 0;
r = sysconf(_SC_TZNAME_MAX);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_TZNAME_MAX is invalid.\n");
                } else {
                    printf("The _SC_TZNAME_MAX has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_TZNAME_MAX is %d\n", (int)r);
  }
#else
printf("The _SC_TZNAME_MAX is undefined.\n");
#endif
#ifdef _SC_AIO_LISTIO_MAX
errno = 0;
r = sysconf(_SC_AIO_LISTIO_MAX);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_AIO_LISTIO_MAX is invalid.\n");
                } else {
                    printf("The _SC_AIO_LISTIO_MAX has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_AIO_LISTIO_MAX is %d\n", (int)r);
  }
#else
printf("The _SC_AIO_LISTIO_MAX is undefined.\n");
#endif
#ifdef _SC_AIO_MAX
errno = 0;
r = sysconf(_SC_AIO_MAX);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_AIO_MAX is invalid.\n");
                } else {
                    printf("The _SC_AIO_MAX has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_AIO_MAX is %d\n", (int)r);
  }
#else
printf("The _SC_AIO_MAX is undefined.\n");
#endif
#ifdef _SC_AIO_PRIO_DELTA_MAX
errno = 0;
r = sysconf(_SC_AIO_PRIO_DELTA_MAX);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_AIO_PRIO_DELTA_MAX is invalid.\n");
                } else {
                    printf("The _SC_AIO_PRIO_DELTA_MAX has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_AIO_PRIO_DELTA_MAX is %d\n", (int)r);
  }
#else
printf("The _SC_AIO_PRIO_DELTA_MAX is undefined.\n");
#endif
#ifdef _SC_ASYNCHRONOUS_IO
errno = 0;
r = sysconf(_SC_ASYNCHRONOUS_IO);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_ASYNCHRONOUS_IO is invalid.\n");
                } else {
                    printf("The _SC_ASYNCHRONOUS_IO has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_ASYNCHRONOUS_IO is %d\n", (int)r);
  }
#else
printf("The _SC_ASYNCHRONOUS_IO is undefined.\n");
#endif
#ifdef _SC_DELAYTIMER_MAX
errno = 0;
r = sysconf(_SC_DELAYTIMER_MAX);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_DELAYTIMER_MAX is invalid.\n");
                } else {
                    printf("The _SC_DELAYTIMER_MAX has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_DELAYTIMER_MAX is %d\n", (int)r);
  }
#else
printf("The _SC_DELAYTIMER_MAX is undefined.\n");
#endif
#ifdef _SC_FSYNC
errno = 0;
r = sysconf(_SC_FSYNC);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_FSYNC is invalid.\n");
                } else {
                    printf("The _SC_FSYNC has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_FSYNC is %d\n", (int)r);
  }
#else
printf("The _SC_FSYNC is undefined.\n");
#endif
#ifdef _SC_MAPPED_FILES
errno = 0;
r = sysconf(_SC_MAPPED_FILES);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_MAPPED_FILES is invalid.\n");
                } else {
                    printf("The _SC_MAPPED_FILES has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_MAPPED_FILES is %d\n", (int)r);
  }
#else
printf("The _SC_MAPPED_FILES is undefined.\n");
#endif
#ifdef _SC_MEMLOCK
errno = 0;
r = sysconf(_SC_MEMLOCK);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_MEMLOCK is invalid.\n");
                } else {
                    printf("The _SC_MEMLOCK has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_MEMLOCK is %d\n", (int)r);
  }
#else
printf("The _SC_MEMLOCK is undefined.\n");
#endif
#ifdef _SC_MEMLOCK_RANGE
errno = 0;
r = sysconf(_SC_MEMLOCK_RANGE);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_MEMLOCK_RANGE is invalid.\n");
                } else {
                    printf("The _SC_MEMLOCK_RANGE has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_MEMLOCK_RANGE is %d\n", (int)r);
  }
#else
printf("The _SC_MEMLOCK_RANGE is undefined.\n");
#endif
#ifdef _SC_MEMORY_PROTECTION
errno = 0;
r = sysconf(_SC_MEMORY_PROTECTION);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_MEMORY_PROTECTION is invalid.\n");
                } else {
                    printf("The _SC_MEMORY_PROTECTION has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_MEMORY_PROTECTION is %d\n", (int)r);
  }
#else
printf("The _SC_MEMORY_PROTECTION is undefined.\n");
#endif
#ifdef _SC_MESSAGE_PASSING
errno = 0;
r = sysconf(_SC_MESSAGE_PASSING);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_MESSAGE_PASSING is invalid.\n");
                } else {
                    printf("The _SC_MESSAGE_PASSING has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_MESSAGE_PASSING is %d\n", (int)r);
  }
#else
printf("The _SC_MESSAGE_PASSING is undefined.\n");
#endif
#ifdef _SC_MQ_OPEN_MAX
errno = 0;
r = sysconf(_SC_MQ_OPEN_MAX);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_MQ_OPEN_MAX is invalid.\n");
                } else {
                    printf("The _SC_MQ_OPEN_MAX has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_MQ_OPEN_MAX is %d\n", (int)r);
  }
#else
printf("The _SC_MQ_OPEN_MAX is undefined.\n");
#endif
#ifdef _SC_MQ_PRIO_MAX
errno = 0;
r = sysconf(_SC_MQ_PRIO_MAX);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_MQ_PRIO_MAX is invalid.\n");
                } else {
                    printf("The _SC_MQ_PRIO_MAX has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_MQ_PRIO_MAX is %d\n", (int)r);
  }
#else
printf("The _SC_MQ_PRIO_MAX is undefined.\n");
#endif
#ifdef _SC_PRIORITIZED_IO
errno = 0;
r = sysconf(_SC_PRIORITIZED_IO);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_PRIORITIZED_IO is invalid.\n");
                } else {
                    printf("The _SC_PRIORITIZED_IO has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_PRIORITIZED_IO is %d\n", (int)r);
  }
#else
printf("The _SC_PRIORITIZED_IO is undefined.\n");
#endif
#ifdef _SC_PRIORITY_SCHEDULING
errno = 0;
r = sysconf(_SC_PRIORITY_SCHEDULING);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_PRIORITY_SCHEDULING is invalid.\n");
                } else {
                    printf("The _SC_PRIORITY_SCHEDULING has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_PRIORITY_SCHEDULING is %d\n", (int)r);
  }
#else
printf("The _SC_PRIORITY_SCHEDULING is undefined.\n");
#endif
#ifdef _SC_REALTIME_SIGNALS
errno = 0;
r = sysconf(_SC_REALTIME_SIGNALS);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_REALTIME_SIGNALS is invalid.\n");
                } else {
                    printf("The _SC_REALTIME_SIGNALS has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_REALTIME_SIGNALS is %d\n", (int)r);
  }
#else
printf("The _SC_REALTIME_SIGNALS is undefined.\n");
#endif
#ifdef _SC_RTSIG_MAX
errno = 0;
r = sysconf(_SC_RTSIG_MAX);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_RTSIG_MAX is invalid.\n");
                } else {
                    printf("The _SC_RTSIG_MAX has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_RTSIG_MAX is %d\n", (int)r);
  }
#else
printf("The _SC_RTSIG_MAX is undefined.\n");
#endif
#ifdef _SC_SEMAPHORES
errno = 0;
r = sysconf(_SC_SEMAPHORES);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_SEMAPHORES is invalid.\n");
                } else {
                    printf("The _SC_SEMAPHORES has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_SEMAPHORES is %d\n", (int)r);
  }
#else
printf("The _SC_SEMAPHORES is undefined.\n");
#endif
#ifdef _SC_SEM_NSEMS_MAX
errno = 0;
r = sysconf(_SC_SEM_NSEMS_MAX);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_SEM_NSEMS_MAX is invalid.\n");
                } else {
                    printf("The _SC_SEM_NSEMS_MAX has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_SEM_NSEMS_MAX is %d\n", (int)r);
  }
#else
printf("The _SC_SEM_NSEMS_MAX is undefined.\n");
#endif
#ifdef _SC_SEM_VALUE_MAX
errno = 0;
r = sysconf(_SC_SEM_VALUE_MAX);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_SEM_VALUE_MAX is invalid.\n");
                } else {
                    printf("The _SC_SEM_VALUE_MAX has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_SEM_VALUE_MAX is %d\n", (int)r);
  }
#else
printf("The _SC_SEM_VALUE_MAX is undefined.\n");
#endif
#ifdef _SC_SHARED_MEMORY_OBJECTS
errno = 0;
r = sysconf(_SC_SHARED_MEMORY_OBJECTS);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_SHARED_MEMORY_OBJECTS is invalid.\n");
                } else {
                    printf("The _SC_SHARED_MEMORY_OBJECTS has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_SHARED_MEMORY_OBJECTS is %d\n", (int)r);
  }
#else
printf("The _SC_SHARED_MEMORY_OBJECTS is undefined.\n");
#endif
#ifdef _SC_SIGQUEUE_MAX
errno = 0;
r = sysconf(_SC_SIGQUEUE_MAX);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_SIGQUEUE_MAX is invalid.\n");
                } else {
                    printf("The _SC_SIGQUEUE_MAX has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_SIGQUEUE_MAX is %d\n", (int)r);
  }
#else
printf("The _SC_SIGQUEUE_MAX is undefined.\n");
#endif
#ifdef _SC_SIGRT_MIN
errno = 0;
r = sysconf(_SC_SIGRT_MIN);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_SIGRT_MIN is invalid.\n");
                } else {
                    printf("The _SC_SIGRT_MIN has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_SIGRT_MIN is %d\n", (int)r);
  }
#else
printf("The _SC_SIGRT_MIN is undefined.\n");
#endif
#ifdef _SC_SIGRT_MAX
errno = 0;
r = sysconf(_SC_SIGRT_MAX);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_SIGRT_MAX is invalid.\n");
                } else {
                    printf("The _SC_SIGRT_MAX has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_SIGRT_MAX is %d\n", (int)r);
  }
#else
printf("The _SC_SIGRT_MAX is undefined.\n");
#endif
#ifdef _SC_SYNCHRONIZED_IO
errno = 0;
r = sysconf(_SC_SYNCHRONIZED_IO);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_SYNCHRONIZED_IO is invalid.\n");
                } else {
                    printf("The _SC_SYNCHRONIZED_IO has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_SYNCHRONIZED_IO is %d\n", (int)r);
  }
#else
printf("The _SC_SYNCHRONIZED_IO is undefined.\n");
#endif
#ifdef _SC_TIMERS
errno = 0;
r = sysconf(_SC_TIMERS);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_TIMERS is invalid.\n");
                } else {
                    printf("The _SC_TIMERS has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_TIMERS is %d\n", (int)r);
  }
#else
printf("The _SC_TIMERS is undefined.\n");
#endif
#ifdef _SC_TIMER_MAX
errno = 0;
r = sysconf(_SC_TIMER_MAX);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_TIMER_MAX is invalid.\n");
                } else {
                    printf("The _SC_TIMER_MAX has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_TIMER_MAX is %d\n", (int)r);
  }
#else
printf("The _SC_TIMER_MAX is undefined.\n");
#endif
#ifdef _SC_2_C_BIND
errno = 0;
r = sysconf(_SC_2_C_BIND);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_2_C_BIND is invalid.\n");
                } else {
                    printf("The _SC_2_C_BIND has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_2_C_BIND is %d\n", (int)r);
  }
#else
printf("The _SC_2_C_BIND is undefined.\n");
#endif
#ifdef _SC_2_C_DEV
errno = 0;
r = sysconf(_SC_2_C_DEV);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_2_C_DEV is invalid.\n");
                } else {
                    printf("The _SC_2_C_DEV has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_2_C_DEV is %d\n", (int)r);
  }
#else
printf("The _SC_2_C_DEV is undefined.\n");
#endif
#ifdef _SC_2_C_VERSION
errno = 0;
r = sysconf(_SC_2_C_VERSION);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_2_C_VERSION is invalid.\n");
                } else {
                    printf("The _SC_2_C_VERSION has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_2_C_VERSION is %d\n", (int)r);
  }
#else
printf("The _SC_2_C_VERSION is undefined.\n");
#endif
#ifdef _SC_2_FORT_DEV
errno = 0;
r = sysconf(_SC_2_FORT_DEV);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_2_FORT_DEV is invalid.\n");
                } else {
                    printf("The _SC_2_FORT_DEV has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_2_FORT_DEV is %d\n", (int)r);
  }
#else
printf("The _SC_2_FORT_DEV is undefined.\n");
#endif
#ifdef _SC_2_FORT_RUN
errno = 0;
r = sysconf(_SC_2_FORT_RUN);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_2_FORT_RUN is invalid.\n");
                } else {
                    printf("The _SC_2_FORT_RUN has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_2_FORT_RUN is %d\n", (int)r);
  }
#else
printf("The _SC_2_FORT_RUN is undefined.\n");
#endif
#ifdef _SC_2_LOCALEDEF
errno = 0;
r = sysconf(_SC_2_LOCALEDEF);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_2_LOCALEDEF is invalid.\n");
                } else {
                    printf("The _SC_2_LOCALEDEF has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_2_LOCALEDEF is %d\n", (int)r);
  }
#else
printf("The _SC_2_LOCALEDEF is undefined.\n");
#endif
#ifdef _SC_2_SW_DEV
errno = 0;
r = sysconf(_SC_2_SW_DEV);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_2_SW_DEV is invalid.\n");
                } else {
                    printf("The _SC_2_SW_DEV has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_2_SW_DEV is %d\n", (int)r);
  }
#else
printf("The _SC_2_SW_DEV is undefined.\n");
#endif
#ifdef _SC_2_UPE
errno = 0;
r = sysconf(_SC_2_UPE);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_2_UPE is invalid.\n");
                } else {
                    printf("The _SC_2_UPE has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_2_UPE is %d\n", (int)r);
  }
#else
printf("The _SC_2_UPE is undefined.\n");
#endif
#ifdef _SC_2_VERSION
errno = 0;
r = sysconf(_SC_2_VERSION);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_2_VERSION is invalid.\n");
                } else {
                    printf("The _SC_2_VERSION has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_2_VERSION is %d\n", (int)r);
  }
#else
printf("The _SC_2_VERSION is undefined.\n");
#endif
#ifdef _SC_BC_BASE_MAX
errno = 0;
r = sysconf(_SC_BC_BASE_MAX);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_BC_BASE_MAX is invalid.\n");
                } else {
                    printf("The _SC_BC_BASE_MAX has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_BC_BASE_MAX is %d\n", (int)r);
  }
#else
printf("The _SC_BC_BASE_MAX is undefined.\n");
#endif
#ifdef _SC_BC_DIM_MAX
errno = 0;
r = sysconf(_SC_BC_DIM_MAX);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_BC_DIM_MAX is invalid.\n");
                } else {
                    printf("The _SC_BC_DIM_MAX has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_BC_DIM_MAX is %d\n", (int)r);
  }
#else
printf("The _SC_BC_DIM_MAX is undefined.\n");
#endif
#ifdef _SC_BC_SCALE_MAX
errno = 0;
r = sysconf(_SC_BC_SCALE_MAX);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_BC_SCALE_MAX is invalid.\n");
                } else {
                    printf("The _SC_BC_SCALE_MAX has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_BC_SCALE_MAX is %d\n", (int)r);
  }
#else
printf("The _SC_BC_SCALE_MAX is undefined.\n");
#endif
#ifdef _SC_BC_STRING_MAX
errno = 0;
r = sysconf(_SC_BC_STRING_MAX);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_BC_STRING_MAX is invalid.\n");
                } else {
                    printf("The _SC_BC_STRING_MAX has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_BC_STRING_MAX is %d\n", (int)r);
  }
#else
printf("The _SC_BC_STRING_MAX is undefined.\n");
#endif
#ifdef _SC_COLL_WEIGHTS_MAX
errno = 0;
r = sysconf(_SC_COLL_WEIGHTS_MAX);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_COLL_WEIGHTS_MAX is invalid.\n");
                } else {
                    printf("The _SC_COLL_WEIGHTS_MAX has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_COLL_WEIGHTS_MAX is %d\n", (int)r);
  }
#else
printf("The _SC_COLL_WEIGHTS_MAX is undefined.\n");
#endif
#ifdef _SC_EXPR_NEST_MAX
errno = 0;
r = sysconf(_SC_EXPR_NEST_MAX);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_EXPR_NEST_MAX is invalid.\n");
                } else {
                    printf("The _SC_EXPR_NEST_MAX has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_EXPR_NEST_MAX is %d\n", (int)r);
  }
#else
printf("The _SC_EXPR_NEST_MAX is undefined.\n");
#endif
#ifdef _SC_LINE_MAX
errno = 0;
r = sysconf(_SC_LINE_MAX);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_LINE_MAX is invalid.\n");
                } else {
                    printf("The _SC_LINE_MAX has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_LINE_MAX is %d\n", (int)r);
  }
#else
printf("The _SC_LINE_MAX is undefined.\n");
#endif
#ifdef _SC_RE_DUP_MAX
errno = 0;
r = sysconf(_SC_RE_DUP_MAX);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_RE_DUP_MAX is invalid.\n");
                } else {
                    printf("The _SC_RE_DUP_MAX has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_RE_DUP_MAX is %d\n", (int)r);
  }
#else
printf("The _SC_RE_DUP_MAX is undefined.\n");
#endif
#ifdef _SC_XOPEN_CRYPT
errno = 0;
r = sysconf(_SC_XOPEN_CRYPT);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_XOPEN_CRYPT is invalid.\n");
                } else {
                    printf("The _SC_XOPEN_CRYPT has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_XOPEN_CRYPT is %d\n", (int)r);
  }
#else
printf("The _SC_XOPEN_CRYPT is undefined.\n");
#endif
#ifdef _SC_XOPEN_ENH_I18N
errno = 0;
r = sysconf(_SC_XOPEN_ENH_I18N);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_XOPEN_ENH_I18N is invalid.\n");
                } else {
                    printf("The _SC_XOPEN_ENH_I18N has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_XOPEN_ENH_I18N is %d\n", (int)r);
  }
#else
printf("The _SC_XOPEN_ENH_I18N is undefined.\n");
#endif
#ifdef _SC_XOPEN_SHM
errno = 0;
r = sysconf(_SC_XOPEN_SHM);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_XOPEN_SHM is invalid.\n");
                } else {
                    printf("The _SC_XOPEN_SHM has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_XOPEN_SHM is %d\n", (int)r);
  }
#else
printf("The _SC_XOPEN_SHM is undefined.\n");
#endif
#ifdef _SC_2_CHAR_TERM
errno = 0;
r = sysconf(_SC_2_CHAR_TERM);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_2_CHAR_TERM is invalid.\n");
                } else {
                    printf("The _SC_2_CHAR_TERM has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_2_CHAR_TERM is %d\n", (int)r);
  }
#else
printf("The _SC_2_CHAR_TERM is undefined.\n");
#endif
#ifdef _SC_XOPEN_XCU_VERSION
errno = 0;
r = sysconf(_SC_XOPEN_XCU_VERSION);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_XOPEN_XCU_VERSION is invalid.\n");
                } else {
                    printf("The _SC_XOPEN_XCU_VERSION has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_XOPEN_XCU_VERSION is %d\n", (int)r);
  }
#else
printf("The _SC_XOPEN_XCU_VERSION is undefined.\n");
#endif
#ifdef _SC_ATEXIT_MAX
errno = 0;
r = sysconf(_SC_ATEXIT_MAX);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_ATEXIT_MAX is invalid.\n");
                } else {
                    printf("The _SC_ATEXIT_MAX has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_ATEXIT_MAX is %d\n", (int)r);
  }
#else
printf("The _SC_ATEXIT_MAX is undefined.\n");
#endif
#ifdef _SC_IOV_MAX
errno = 0;
r = sysconf(_SC_IOV_MAX);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_IOV_MAX is invalid.\n");
                } else {
                    printf("The _SC_IOV_MAX has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_IOV_MAX is %d\n", (int)r);
  }
#else
printf("The _SC_IOV_MAX is undefined.\n");
#endif
#ifdef _SC_XOPEN_UNIX
errno = 0;
r = sysconf(_SC_XOPEN_UNIX);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_XOPEN_UNIX is invalid.\n");
                } else {
                    printf("The _SC_XOPEN_UNIX has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_XOPEN_UNIX is %d\n", (int)r);
  }
#else
printf("The _SC_XOPEN_UNIX is undefined.\n");
#endif
#ifdef _SC_PAGE_SIZE
errno = 0;
r = sysconf(_SC_PAGE_SIZE);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_PAGE_SIZE is invalid.\n");
                } else {
                    printf("The _SC_PAGE_SIZE has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_PAGE_SIZE is %d\n", (int)r);
  }
#else
printf("The _SC_PAGE_SIZE is undefined.\n");
#endif
#ifdef _SC_PHYS_PAGES
errno = 0;
r = sysconf(_SC_PHYS_PAGES);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_PHYS_PAGES is invalid.\n");
                } else {
                    printf("The _SC_PHYS_PAGES has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_PHYS_PAGES is %d\n", (int)r);
  }
#else
printf("The _SC_PHYS_PAGES is undefined.\n");
#endif
#ifdef _SC_AVPHYS_PAGES
errno = 0;
r = sysconf(_SC_AVPHYS_PAGES);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_AVPHYS_PAGES is invalid.\n");
                } else {
                    printf("The _SC_AVPHYS_PAGES has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_AVPHYS_PAGES is %d\n", (int)r);
  }
#else
printf("The _SC_AVPHYS_PAGES is undefined.\n");
#endif
#ifdef _SC_COHER_BLKSZ
errno = 0;
r = sysconf(_SC_COHER_BLKSZ);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_COHER_BLKSZ is invalid.\n");
                } else {
                    printf("The _SC_COHER_BLKSZ has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_COHER_BLKSZ is %d\n", (int)r);
  }
#else
printf("The _SC_COHER_BLKSZ is undefined.\n");
#endif
#ifdef _SC_SPLIT_CACHE
errno = 0;
r = sysconf(_SC_SPLIT_CACHE);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_SPLIT_CACHE is invalid.\n");
                } else {
                    printf("The _SC_SPLIT_CACHE has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_SPLIT_CACHE is %d\n", (int)r);
  }
#else
printf("The _SC_SPLIT_CACHE is undefined.\n");
#endif
#ifdef _SC_ICACHE_SZ
errno = 0;
r = sysconf(_SC_ICACHE_SZ);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_ICACHE_SZ is invalid.\n");
                } else {
                    printf("The _SC_ICACHE_SZ has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_ICACHE_SZ is %d\n", (int)r);
  }
#else
printf("The _SC_ICACHE_SZ is undefined.\n");
#endif
#ifdef _SC_DCACHE_SZ
errno = 0;
r = sysconf(_SC_DCACHE_SZ);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_DCACHE_SZ is invalid.\n");
                } else {
                    printf("The _SC_DCACHE_SZ has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_DCACHE_SZ is %d\n", (int)r);
  }
#else
printf("The _SC_DCACHE_SZ is undefined.\n");
#endif
#ifdef _SC_ICACHE_LINESZ
errno = 0;
r = sysconf(_SC_ICACHE_LINESZ);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_ICACHE_LINESZ is invalid.\n");
                } else {
                    printf("The _SC_ICACHE_LINESZ has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_ICACHE_LINESZ is %d\n", (int)r);
  }
#else
printf("The _SC_ICACHE_LINESZ is undefined.\n");
#endif
#ifdef _SC_DCACHE_LINESZ
errno = 0;
r = sysconf(_SC_DCACHE_LINESZ);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_DCACHE_LINESZ is invalid.\n");
                } else {
                    printf("The _SC_DCACHE_LINESZ has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_DCACHE_LINESZ is %d\n", (int)r);
  }
#else
printf("The _SC_DCACHE_LINESZ is undefined.\n");
#endif
#ifdef _SC_ICACHE_BLKSZ
errno = 0;
r = sysconf(_SC_ICACHE_BLKSZ);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_ICACHE_BLKSZ is invalid.\n");
                } else {
                    printf("The _SC_ICACHE_BLKSZ has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_ICACHE_BLKSZ is %d\n", (int)r);
  }
#else
printf("The _SC_ICACHE_BLKSZ is undefined.\n");
#endif
#ifdef _SC_DCACHE_BLKSZ
errno = 0;
r = sysconf(_SC_DCACHE_BLKSZ);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_DCACHE_BLKSZ is invalid.\n");
                } else {
                    printf("The _SC_DCACHE_BLKSZ has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_DCACHE_BLKSZ is %d\n", (int)r);
  }
#else
printf("The _SC_DCACHE_BLKSZ is undefined.\n");
#endif
#ifdef _SC_DCACHE_TBLKSZ
errno = 0;
r = sysconf(_SC_DCACHE_TBLKSZ);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_DCACHE_TBLKSZ is invalid.\n");
                } else {
                    printf("The _SC_DCACHE_TBLKSZ has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_DCACHE_TBLKSZ is %d\n", (int)r);
  }
#else
printf("The _SC_DCACHE_TBLKSZ is undefined.\n");
#endif
#ifdef _SC_ICACHE_ASSOC
errno = 0;
r = sysconf(_SC_ICACHE_ASSOC);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_ICACHE_ASSOC is invalid.\n");
                } else {
                    printf("The _SC_ICACHE_ASSOC has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_ICACHE_ASSOC is %d\n", (int)r);
  }
#else
printf("The _SC_ICACHE_ASSOC is undefined.\n");
#endif
#ifdef _SC_DCACHE_ASSOC
errno = 0;
r = sysconf(_SC_DCACHE_ASSOC);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_DCACHE_ASSOC is invalid.\n");
                } else {
                    printf("The _SC_DCACHE_ASSOC has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_DCACHE_ASSOC is %d\n", (int)r);
  }
#else
printf("The _SC_DCACHE_ASSOC is undefined.\n");
#endif
#ifdef _SC_THREAD_DESTRUCTOR_ITERATIONS
errno = 0;
r = sysconf(_SC_THREAD_DESTRUCTOR_ITERATIONS);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_THREAD_DESTRUCTOR_ITERATIONS is invalid.\n");
                } else {
                    printf("The _SC_THREAD_DESTRUCTOR_ITERATIONS has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_THREAD_DESTRUCTOR_ITERATIONS is %d\n", (int)r);
  }
#else
printf("The _SC_THREAD_DESTRUCTOR_ITERATIONS is undefined.\n");
#endif
#ifdef _SC_GETGR_R_SIZE_MAX
errno = 0;
r = sysconf(_SC_GETGR_R_SIZE_MAX);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_GETGR_R_SIZE_MAX is invalid.\n");
                } else {
                    printf("The _SC_GETGR_R_SIZE_MAX has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_GETGR_R_SIZE_MAX is %d\n", (int)r);
  }
#else
printf("The _SC_GETGR_R_SIZE_MAX is undefined.\n");
#endif
#ifdef _SC_GETPW_R_SIZE_MAX
errno = 0;
r = sysconf(_SC_GETPW_R_SIZE_MAX);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_GETPW_R_SIZE_MAX is invalid.\n");
                } else {
                    printf("The _SC_GETPW_R_SIZE_MAX has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_GETPW_R_SIZE_MAX is %d\n", (int)r);
  }
#else
printf("The _SC_GETPW_R_SIZE_MAX is undefined.\n");
#endif
#ifdef _SC_LOGIN_NAME_MAX
errno = 0;
r = sysconf(_SC_LOGIN_NAME_MAX);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_LOGIN_NAME_MAX is invalid.\n");
                } else {
                    printf("The _SC_LOGIN_NAME_MAX has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_LOGIN_NAME_MAX is %d\n", (int)r);
  }
#else
printf("The _SC_LOGIN_NAME_MAX is undefined.\n");
#endif
#ifdef _SC_THREAD_KEYS_MAX
errno = 0;
r = sysconf(_SC_THREAD_KEYS_MAX);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_THREAD_KEYS_MAX is invalid.\n");
                } else {
                    printf("The _SC_THREAD_KEYS_MAX has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_THREAD_KEYS_MAX is %d\n", (int)r);
  }
#else
printf("The _SC_THREAD_KEYS_MAX is undefined.\n");
#endif
#ifdef _SC_THREAD_STACK_MIN
errno = 0;
r = sysconf(_SC_THREAD_STACK_MIN);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_THREAD_STACK_MIN is invalid.\n");
                } else {
                    printf("The _SC_THREAD_STACK_MIN has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_THREAD_STACK_MIN is %d\n", (int)r);
  }
#else
printf("The _SC_THREAD_STACK_MIN is undefined.\n");
#endif
#ifdef _SC_THREAD_THREADS_MAX
errno = 0;
r = sysconf(_SC_THREAD_THREADS_MAX);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_THREAD_THREADS_MAX is invalid.\n");
                } else {
                    printf("The _SC_THREAD_THREADS_MAX has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_THREAD_THREADS_MAX is %d\n", (int)r);
  }
#else
printf("The _SC_THREAD_THREADS_MAX is undefined.\n");
#endif
#ifdef _SC_TTY_NAME_MAX
errno = 0;
r = sysconf(_SC_TTY_NAME_MAX);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_TTY_NAME_MAX is invalid.\n");
                } else {
                    printf("The _SC_TTY_NAME_MAX has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_TTY_NAME_MAX is %d\n", (int)r);
  }
#else
printf("The _SC_TTY_NAME_MAX is undefined.\n");
#endif
#ifdef _SC_THREADS
errno = 0;
r = sysconf(_SC_THREADS);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_THREADS is invalid.\n");
                } else {
                    printf("The _SC_THREADS has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_THREADS is %d\n", (int)r);
  }
#else
printf("The _SC_THREADS is undefined.\n");
#endif
#ifdef _SC_THREAD_ATTR_STACKADDR
errno = 0;
r = sysconf(_SC_THREAD_ATTR_STACKADDR);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_THREAD_ATTR_STACKADDR is invalid.\n");
                } else {
                    printf("The _SC_THREAD_ATTR_STACKADDR has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_THREAD_ATTR_STACKADDR is %d\n", (int)r);
  }
#else
printf("The _SC_THREAD_ATTR_STACKADDR is undefined.\n");
#endif
#ifdef _SC_THREAD_ATTR_STACKSIZE
errno = 0;
r = sysconf(_SC_THREAD_ATTR_STACKSIZE);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_THREAD_ATTR_STACKSIZE is invalid.\n");
                } else {
                    printf("The _SC_THREAD_ATTR_STACKSIZE has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_THREAD_ATTR_STACKSIZE is %d\n", (int)r);
  }
#else
printf("The _SC_THREAD_ATTR_STACKSIZE is undefined.\n");
#endif
#ifdef _SC_THREAD_PRIORITY_SCHEDULING
errno = 0;
r = sysconf(_SC_THREAD_PRIORITY_SCHEDULING);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_THREAD_PRIORITY_SCHEDULING is invalid.\n");
                } else {
                    printf("The _SC_THREAD_PRIORITY_SCHEDULING has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_THREAD_PRIORITY_SCHEDULING is %d\n", (int)r);
  }
#else
printf("The _SC_THREAD_PRIORITY_SCHEDULING is undefined.\n");
#endif
#ifdef _SC_THREAD_PRIO_INHERIT
errno = 0;
r = sysconf(_SC_THREAD_PRIO_INHERIT);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_THREAD_PRIO_INHERIT is invalid.\n");
                } else {
                    printf("The _SC_THREAD_PRIO_INHERIT has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_THREAD_PRIO_INHERIT is %d\n", (int)r);
  }
#else
printf("The _SC_THREAD_PRIO_INHERIT is undefined.\n");
#endif
#ifdef _SC_THREAD_PRIO_PROTECT
errno = 0;
r = sysconf(_SC_THREAD_PRIO_PROTECT);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_THREAD_PRIO_PROTECT is invalid.\n");
                } else {
                    printf("The _SC_THREAD_PRIO_PROTECT has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_THREAD_PRIO_PROTECT is %d\n", (int)r);
  }
#else
printf("The _SC_THREAD_PRIO_PROTECT is undefined.\n");
#endif
#ifdef _SC_THREAD_PROCESS_SHARED
errno = 0;
r = sysconf(_SC_THREAD_PROCESS_SHARED);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_THREAD_PROCESS_SHARED is invalid.\n");
                } else {
                    printf("The _SC_THREAD_PROCESS_SHARED has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_THREAD_PROCESS_SHARED is %d\n", (int)r);
  }
#else
printf("The _SC_THREAD_PROCESS_SHARED is undefined.\n");
#endif
#ifdef _SC_THREAD_SAFE_FUNCTIONS
errno = 0;
r = sysconf(_SC_THREAD_SAFE_FUNCTIONS);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_THREAD_SAFE_FUNCTIONS is invalid.\n");
                } else {
                    printf("The _SC_THREAD_SAFE_FUNCTIONS has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_THREAD_SAFE_FUNCTIONS is %d\n", (int)r);
  }
#else
printf("The _SC_THREAD_SAFE_FUNCTIONS is undefined.\n");
#endif
#ifdef _SC_PPC_GRANULE_SZ
errno = 0;
r = sysconf(_SC_PPC_GRANULE_SZ);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_PPC_GRANULE_SZ is invalid.\n");
                } else {
                    printf("The _SC_PPC_GRANULE_SZ has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_PPC_GRANULE_SZ is %d\n", (int)r);
  }
#else
printf("The _SC_PPC_GRANULE_SZ is undefined.\n");
#endif
#ifdef _SC_PPC_TB_TICKSPSECH
errno = 0;
r = sysconf(_SC_PPC_TB_TICKSPSECH);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_PPC_TB_TICKSPSECH is invalid.\n");
                } else {
                    printf("The _SC_PPC_TB_TICKSPSECH has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_PPC_TB_TICKSPSECH is %d\n", (int)r);
  }
#else
printf("The _SC_PPC_TB_TICKSPSECH is undefined.\n");
#endif
#ifdef _SC_PPC_TB_TICKSPSECL
errno = 0;
r = sysconf(_SC_PPC_TB_TICKSPSECL);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_PPC_TB_TICKSPSECL is invalid.\n");
                } else {
                    printf("The _SC_PPC_TB_TICKSPSECL has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_PPC_TB_TICKSPSECL is %d\n", (int)r);
  }
#else
printf("The _SC_PPC_TB_TICKSPSECL is undefined.\n");
#endif
#ifdef _SC_ARG_MAX
errno = 0;
r = sysconf(_SC_ARG_MAX);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_ARG_MAX is invalid.\n");
                } else {
                    printf("The _SC_ARG_MAX has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_ARG_MAX is %d\n", (int)r);
  }
#else
printf("The _SC_ARG_MAX is undefined.\n");
#endif
#ifdef _SC_CHILD_MAX
errno = 0;
r = sysconf(_SC_CHILD_MAX);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_CHILD_MAX is invalid.\n");
                } else {
                    printf("The _SC_CHILD_MAX has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_CHILD_MAX is %d\n", (int)r);
  }
#else
printf("The _SC_CHILD_MAX is undefined.\n");
#endif
#ifdef _SC_CLK_TCK
errno = 0;
r = sysconf(_SC_CLK_TCK);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_CLK_TCK is invalid.\n");
                } else {
                    printf("The _SC_CLK_TCK has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_CLK_TCK is %d\n", (int)r);
  }
#else
printf("The _SC_CLK_TCK is undefined.\n");
#endif
#ifdef _SC_NGROUPS_MAX
errno = 0;
r = sysconf(_SC_NGROUPS_MAX);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_NGROUPS_MAX is invalid.\n");
                } else {
                    printf("The _SC_NGROUPS_MAX has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_NGROUPS_MAX is %d\n", (int)r);
  }
#else
printf("The _SC_NGROUPS_MAX is undefined.\n");
#endif
#ifdef _SC_OPEN_MAX
errno = 0;
r = sysconf(_SC_OPEN_MAX);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_OPEN_MAX is invalid.\n");
                } else {
                    printf("The _SC_OPEN_MAX has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_OPEN_MAX is %d\n", (int)r);
  }
#else
printf("The _SC_OPEN_MAX is undefined.\n");
#endif
#ifdef _SC_STREAM_MAX
errno = 0;
r = sysconf(_SC_STREAM_MAX);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_STREAM_MAX is invalid.\n");
                } else {
                    printf("The _SC_STREAM_MAX has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_STREAM_MAX is %d\n", (int)r);
  }
#else
printf("The _SC_STREAM_MAX is undefined.\n");
#endif
#ifdef _SC_TZNAME_MAX
errno = 0;
r = sysconf(_SC_TZNAME_MAX);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_TZNAME_MAX is invalid.\n");
                } else {
                    printf("The _SC_TZNAME_MAX has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_TZNAME_MAX is %d\n", (int)r);
  }
#else
printf("The _SC_TZNAME_MAX is undefined.\n");
#endif
#ifdef _SC_JOB_CONTROL
errno = 0;
r = sysconf(_SC_JOB_CONTROL);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_JOB_CONTROL is invalid.\n");
                } else {
                    printf("The _SC_JOB_CONTROL has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_JOB_CONTROL is %d\n", (int)r);
  }
#else
printf("The _SC_JOB_CONTROL is undefined.\n");
#endif
#ifdef _SC_SAVED_IDS
errno = 0;
r = sysconf(_SC_SAVED_IDS);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_SAVED_IDS is invalid.\n");
                } else {
                    printf("The _SC_SAVED_IDS has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_SAVED_IDS is %d\n", (int)r);
  }
#else
printf("The _SC_SAVED_IDS is undefined.\n");
#endif
#ifdef _SC_VERSION
errno = 0;
r = sysconf(_SC_VERSION);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_VERSION is invalid.\n");
                } else {
                    printf("The _SC_VERSION has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_VERSION is %d\n", (int)r);
  }
#else
printf("The _SC_VERSION is undefined.\n");
#endif
#ifdef _SC_PASS_MAX
errno = 0;
r = sysconf(_SC_PASS_MAX);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_PASS_MAX is invalid.\n");
                } else {
                    printf("The _SC_PASS_MAX has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_PASS_MAX is %d\n", (int)r);
  }
#else
printf("The _SC_PASS_MAX is undefined.\n");
#endif
#ifdef _SC_LOGNAME_MAX
errno = 0;
r = sysconf(_SC_LOGNAME_MAX);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_LOGNAME_MAX is invalid.\n");
                } else {
                    printf("The _SC_LOGNAME_MAX has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_LOGNAME_MAX is %d\n", (int)r);
  }
#else
printf("The _SC_LOGNAME_MAX is undefined.\n");
#endif
#ifdef _SC_PAGESIZE
errno = 0;
r = sysconf(_SC_PAGESIZE);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_PAGESIZE is invalid.\n");
                } else {
                    printf("The _SC_PAGESIZE has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_PAGESIZE is %d\n", (int)r);
  }
#else
printf("The _SC_PAGESIZE is undefined.\n");
#endif
#ifdef _SC_XOPEN_VERSION
errno = 0;
r = sysconf(_SC_XOPEN_VERSION);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_XOPEN_VERSION is invalid.\n");
                } else {
                    printf("The _SC_XOPEN_VERSION has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_XOPEN_VERSION is %d\n", (int)r);
  }
#else
printf("The _SC_XOPEN_VERSION is undefined.\n");
#endif
#ifdef _SC_STREAM_MAX
errno = 0;
r = sysconf(_SC_STREAM_MAX);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_STREAM_MAX is invalid.\n");
                } else {
                    printf("The _SC_STREAM_MAX has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_STREAM_MAX is %d\n", (int)r);
  }
#else
printf("The _SC_STREAM_MAX is undefined.\n");
#endif
#ifdef _SC_TZNAME_MAX
errno = 0;
r = sysconf(_SC_TZNAME_MAX);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_TZNAME_MAX is invalid.\n");
                } else {
                    printf("The _SC_TZNAME_MAX has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_TZNAME_MAX is %d\n", (int)r);
  }
#else
printf("The _SC_TZNAME_MAX is undefined.\n");
#endif
#ifdef _SC_BC_BASE_MAX
errno = 0;
r = sysconf(_SC_BC_BASE_MAX);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_BC_BASE_MAX is invalid.\n");
                } else {
                    printf("The _SC_BC_BASE_MAX has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_BC_BASE_MAX is %d\n", (int)r);
  }
#else
printf("The _SC_BC_BASE_MAX is undefined.\n");
#endif
#ifdef _SC_BC_DIM_MAX
errno = 0;
r = sysconf(_SC_BC_DIM_MAX);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_BC_DIM_MAX is invalid.\n");
                } else {
                    printf("The _SC_BC_DIM_MAX has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_BC_DIM_MAX is %d\n", (int)r);
  }
#else
printf("The _SC_BC_DIM_MAX is undefined.\n");
#endif
#ifdef _SC_BC_SCALE_MAX
errno = 0;
r = sysconf(_SC_BC_SCALE_MAX);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_BC_SCALE_MAX is invalid.\n");
                } else {
                    printf("The _SC_BC_SCALE_MAX has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_BC_SCALE_MAX is %d\n", (int)r);
  }
#else
printf("The _SC_BC_SCALE_MAX is undefined.\n");
#endif
#ifdef _SC_BC_STRING_MAX
errno = 0;
r = sysconf(_SC_BC_STRING_MAX);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_BC_STRING_MAX is invalid.\n");
                } else {
                    printf("The _SC_BC_STRING_MAX has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_BC_STRING_MAX is %d\n", (int)r);
  }
#else
printf("The _SC_BC_STRING_MAX is undefined.\n");
#endif
#ifdef _SC_COLL_WEIGHTS_MAX
errno = 0;
r = sysconf(_SC_COLL_WEIGHTS_MAX);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_COLL_WEIGHTS_MAX is invalid.\n");
                } else {
                    printf("The _SC_COLL_WEIGHTS_MAX has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_COLL_WEIGHTS_MAX is %d\n", (int)r);
  }
#else
printf("The _SC_COLL_WEIGHTS_MAX is undefined.\n");
#endif
#ifdef _SC_EQUIV_CLASS_MAX
errno = 0;
r = sysconf(_SC_EQUIV_CLASS_MAX);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_EQUIV_CLASS_MAX is invalid.\n");
                } else {
                    printf("The _SC_EQUIV_CLASS_MAX has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_EQUIV_CLASS_MAX is %d\n", (int)r);
  }
#else
printf("The _SC_EQUIV_CLASS_MAX is undefined.\n");
#endif
#ifdef _SC_EXPR_NEST_MAX
errno = 0;
r = sysconf(_SC_EXPR_NEST_MAX);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_EXPR_NEST_MAX is invalid.\n");
                } else {
                    printf("The _SC_EXPR_NEST_MAX has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_EXPR_NEST_MAX is %d\n", (int)r);
  }
#else
printf("The _SC_EXPR_NEST_MAX is undefined.\n");
#endif
#ifdef _SC_LINE_MAX
errno = 0;
r = sysconf(_SC_LINE_MAX);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_LINE_MAX is invalid.\n");
                } else {
                    printf("The _SC_LINE_MAX has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_LINE_MAX is %d\n", (int)r);
  }
#else
printf("The _SC_LINE_MAX is undefined.\n");
#endif
#ifdef _SC_RE_DUP_MAX
errno = 0;
r = sysconf(_SC_RE_DUP_MAX);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_RE_DUP_MAX is invalid.\n");
                } else {
                    printf("The _SC_RE_DUP_MAX has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_RE_DUP_MAX is %d\n", (int)r);
  }
#else
printf("The _SC_RE_DUP_MAX is undefined.\n");
#endif
#ifdef _SC_2_VERSION
errno = 0;
r = sysconf(_SC_2_VERSION);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_2_VERSION is invalid.\n");
                } else {
                    printf("The _SC_2_VERSION has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_2_VERSION is %d\n", (int)r);
  }
#else
printf("The _SC_2_VERSION is undefined.\n");
#endif
#ifdef _SC_2_C_BIND
errno = 0;
r = sysconf(_SC_2_C_BIND);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_2_C_BIND is invalid.\n");
                } else {
                    printf("The _SC_2_C_BIND has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_2_C_BIND is %d\n", (int)r);
  }
#else
printf("The _SC_2_C_BIND is undefined.\n");
#endif
#ifdef _SC_2_C_DEV
errno = 0;
r = sysconf(_SC_2_C_DEV);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_2_C_DEV is invalid.\n");
                } else {
                    printf("The _SC_2_C_DEV has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_2_C_DEV is %d\n", (int)r);
  }
#else
printf("The _SC_2_C_DEV is undefined.\n");
#endif
#ifdef _SC_2_FORT_DEV
errno = 0;
r = sysconf(_SC_2_FORT_DEV);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_2_FORT_DEV is invalid.\n");
                } else {
                    printf("The _SC_2_FORT_DEV has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_2_FORT_DEV is %d\n", (int)r);
  }
#else
printf("The _SC_2_FORT_DEV is undefined.\n");
#endif
#ifdef _SC_2_FORT_RUN
errno = 0;
r = sysconf(_SC_2_FORT_RUN);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_2_FORT_RUN is invalid.\n");
                } else {
                    printf("The _SC_2_FORT_RUN has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_2_FORT_RUN is %d\n", (int)r);
  }
#else
printf("The _SC_2_FORT_RUN is undefined.\n");
#endif
#ifdef _SC_2_SW_DEV
errno = 0;
r = sysconf(_SC_2_SW_DEV);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_2_SW_DEV is invalid.\n");
                } else {
                    printf("The _SC_2_SW_DEV has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_2_SW_DEV is %d\n", (int)r);
  }
#else
printf("The _SC_2_SW_DEV is undefined.\n");
#endif
#ifdef _SC_2_LOCALEDEF
errno = 0;
r = sysconf(_SC_2_LOCALEDEF);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_2_LOCALEDEF is invalid.\n");
                } else {
                    printf("The _SC_2_LOCALEDEF has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_2_LOCALEDEF is %d\n", (int)r);
  }
#else
printf("The _SC_2_LOCALEDEF is undefined.\n");
#endif
#ifdef _SC_AIO_LISTIO_MAX
errno = 0;
r = sysconf(_SC_AIO_LISTIO_MAX);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_AIO_LISTIO_MAX is invalid.\n");
                } else {
                    printf("The _SC_AIO_LISTIO_MAX has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_AIO_LISTIO_MAX is %d\n", (int)r);
  }
#else
printf("The _SC_AIO_LISTIO_MAX is undefined.\n");
#endif
#ifdef _SC_AIO_MAX
errno = 0;
r = sysconf(_SC_AIO_MAX);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_AIO_MAX is invalid.\n");
                } else {
                    printf("The _SC_AIO_MAX has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_AIO_MAX is %d\n", (int)r);
  }
#else
printf("The _SC_AIO_MAX is undefined.\n");
#endif
#ifdef _SC_AIO_PRIO_DELTA_MAX
errno = 0;
r = sysconf(_SC_AIO_PRIO_DELTA_MAX);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_AIO_PRIO_DELTA_MAX is invalid.\n");
                } else {
                    printf("The _SC_AIO_PRIO_DELTA_MAX has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_AIO_PRIO_DELTA_MAX is %d\n", (int)r);
  }
#else
printf("The _SC_AIO_PRIO_DELTA_MAX is undefined.\n");
#endif
#ifdef _SC_DELAYTIMER_MAX
errno = 0;
r = sysconf(_SC_DELAYTIMER_MAX);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_DELAYTIMER_MAX is invalid.\n");
                } else {
                    printf("The _SC_DELAYTIMER_MAX has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_DELAYTIMER_MAX is %d\n", (int)r);
  }
#else
printf("The _SC_DELAYTIMER_MAX is undefined.\n");
#endif
#ifdef _SC_MQ_OPEN_MAX
errno = 0;
r = sysconf(_SC_MQ_OPEN_MAX);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_MQ_OPEN_MAX is invalid.\n");
                } else {
                    printf("The _SC_MQ_OPEN_MAX has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_MQ_OPEN_MAX is %d\n", (int)r);
  }
#else
printf("The _SC_MQ_OPEN_MAX is undefined.\n");
#endif
#ifdef _SC_MQ_PRIO_MAX
errno = 0;
r = sysconf(_SC_MQ_PRIO_MAX);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_MQ_PRIO_MAX is invalid.\n");
                } else {
                    printf("The _SC_MQ_PRIO_MAX has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_MQ_PRIO_MAX is %d\n", (int)r);
  }
#else
printf("The _SC_MQ_PRIO_MAX is undefined.\n");
#endif
#ifdef _SC_RTSIG_MAX
errno = 0;
r = sysconf(_SC_RTSIG_MAX);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_RTSIG_MAX is invalid.\n");
                } else {
                    printf("The _SC_RTSIG_MAX has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_RTSIG_MAX is %d\n", (int)r);
  }
#else
printf("The _SC_RTSIG_MAX is undefined.\n");
#endif
#ifdef _SC_SEM_NSEMS_MAX
errno = 0;
r = sysconf(_SC_SEM_NSEMS_MAX);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_SEM_NSEMS_MAX is invalid.\n");
                } else {
                    printf("The _SC_SEM_NSEMS_MAX has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_SEM_NSEMS_MAX is %d\n", (int)r);
  }
#else
printf("The _SC_SEM_NSEMS_MAX is undefined.\n");
#endif
#ifdef _SC_SEM_VALUE_MAX
errno = 0;
r = sysconf(_SC_SEM_VALUE_MAX);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_SEM_VALUE_MAX is invalid.\n");
                } else {
                    printf("The _SC_SEM_VALUE_MAX has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_SEM_VALUE_MAX is %d\n", (int)r);
  }
#else
printf("The _SC_SEM_VALUE_MAX is undefined.\n");
#endif
#ifdef _SC_SIGQUEUE_MAX
errno = 0;
r = sysconf(_SC_SIGQUEUE_MAX);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_SIGQUEUE_MAX is invalid.\n");
                } else {
                    printf("The _SC_SIGQUEUE_MAX has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_SIGQUEUE_MAX is %d\n", (int)r);
  }
#else
printf("The _SC_SIGQUEUE_MAX is undefined.\n");
#endif
#ifdef _SC_TIMER_MAX
errno = 0;
r = sysconf(_SC_TIMER_MAX);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_TIMER_MAX is invalid.\n");
                } else {
                    printf("The _SC_TIMER_MAX has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_TIMER_MAX is %d\n", (int)r);
  }
#else
printf("The _SC_TIMER_MAX is undefined.\n");
#endif
#ifdef _SC_ASYNCHRONOUS_IO
errno = 0;
r = sysconf(_SC_ASYNCHRONOUS_IO);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_ASYNCHRONOUS_IO is invalid.\n");
                } else {
                    printf("The _SC_ASYNCHRONOUS_IO has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_ASYNCHRONOUS_IO is %d\n", (int)r);
  }
#else
printf("The _SC_ASYNCHRONOUS_IO is undefined.\n");
#endif
#ifdef _SC_FSYNC
errno = 0;
r = sysconf(_SC_FSYNC);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_FSYNC is invalid.\n");
                } else {
                    printf("The _SC_FSYNC has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_FSYNC is %d\n", (int)r);
  }
#else
printf("The _SC_FSYNC is undefined.\n");
#endif
#ifdef _SC_MAPPED_FILES
errno = 0;
r = sysconf(_SC_MAPPED_FILES);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_MAPPED_FILES is invalid.\n");
                } else {
                    printf("The _SC_MAPPED_FILES has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_MAPPED_FILES is %d\n", (int)r);
  }
#else
printf("The _SC_MAPPED_FILES is undefined.\n");
#endif
#ifdef _SC_MEMLOCK
errno = 0;
r = sysconf(_SC_MEMLOCK);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_MEMLOCK is invalid.\n");
                } else {
                    printf("The _SC_MEMLOCK has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_MEMLOCK is %d\n", (int)r);
  }
#else
printf("The _SC_MEMLOCK is undefined.\n");
#endif
#ifdef _SC_MEMLOCK_RANGE
errno = 0;
r = sysconf(_SC_MEMLOCK_RANGE);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_MEMLOCK_RANGE is invalid.\n");
                } else {
                    printf("The _SC_MEMLOCK_RANGE has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_MEMLOCK_RANGE is %d\n", (int)r);
  }
#else
printf("The _SC_MEMLOCK_RANGE is undefined.\n");
#endif
#ifdef _SC_MEMORY_PROTECTION
errno = 0;
r = sysconf(_SC_MEMORY_PROTECTION);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_MEMORY_PROTECTION is invalid.\n");
                } else {
                    printf("The _SC_MEMORY_PROTECTION has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_MEMORY_PROTECTION is %d\n", (int)r);
  }
#else
printf("The _SC_MEMORY_PROTECTION is undefined.\n");
#endif
#ifdef _SC_MESSAGE_PASSING
errno = 0;
r = sysconf(_SC_MESSAGE_PASSING);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_MESSAGE_PASSING is invalid.\n");
                } else {
                    printf("The _SC_MESSAGE_PASSING has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_MESSAGE_PASSING is %d\n", (int)r);
  }
#else
printf("The _SC_MESSAGE_PASSING is undefined.\n");
#endif
#ifdef _SC_PRIORITIZED_IO
errno = 0;
r = sysconf(_SC_PRIORITIZED_IO);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_PRIORITIZED_IO is invalid.\n");
                } else {
                    printf("The _SC_PRIORITIZED_IO has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_PRIORITIZED_IO is %d\n", (int)r);
  }
#else
printf("The _SC_PRIORITIZED_IO is undefined.\n");
#endif
#ifdef _SC_PRIORITY_SCHEDULING
errno = 0;
r = sysconf(_SC_PRIORITY_SCHEDULING);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_PRIORITY_SCHEDULING is invalid.\n");
                } else {
                    printf("The _SC_PRIORITY_SCHEDULING has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_PRIORITY_SCHEDULING is %d\n", (int)r);
  }
#else
printf("The _SC_PRIORITY_SCHEDULING is undefined.\n");
#endif
#ifdef _SC_REALTIME_SIGNALS
errno = 0;
r = sysconf(_SC_REALTIME_SIGNALS);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_REALTIME_SIGNALS is invalid.\n");
                } else {
                    printf("The _SC_REALTIME_SIGNALS has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_REALTIME_SIGNALS is %d\n", (int)r);
  }
#else
printf("The _SC_REALTIME_SIGNALS is undefined.\n");
#endif
#ifdef _SC_SEMAPHORES
errno = 0;
r = sysconf(_SC_SEMAPHORES);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_SEMAPHORES is invalid.\n");
                } else {
                    printf("The _SC_SEMAPHORES has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_SEMAPHORES is %d\n", (int)r);
  }
#else
printf("The _SC_SEMAPHORES is undefined.\n");
#endif
#ifdef _SC_SHARED_MEMORY_OBJECTS
errno = 0;
r = sysconf(_SC_SHARED_MEMORY_OBJECTS);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_SHARED_MEMORY_OBJECTS is invalid.\n");
                } else {
                    printf("The _SC_SHARED_MEMORY_OBJECTS has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_SHARED_MEMORY_OBJECTS is %d\n", (int)r);
  }
#else
printf("The _SC_SHARED_MEMORY_OBJECTS is undefined.\n");
#endif
#ifdef _SC_SYNCHRONIZED_IO
errno = 0;
r = sysconf(_SC_SYNCHRONIZED_IO);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_SYNCHRONIZED_IO is invalid.\n");
                } else {
                    printf("The _SC_SYNCHRONIZED_IO has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_SYNCHRONIZED_IO is %d\n", (int)r);
  }
#else
printf("The _SC_SYNCHRONIZED_IO is undefined.\n");
#endif
#ifdef _SC_TIMERS
errno = 0;
r = sysconf(_SC_TIMERS);
  if (r == -1) {
                if (errno == EINVAL) {
                    printf("The name _SC_TIMERS is invalid.\n");
                } else {
                    printf("The _SC_TIMERS has no definite limit\n");
                }
            } else { 
      printf("The value of _SC_TIMERS is %d\n", (int)r);
  }
#else
printf("The _SC_TIMERS is undefined.\n");
#endif
return 0;
}
