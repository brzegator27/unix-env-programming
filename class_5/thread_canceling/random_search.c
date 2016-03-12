#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <pthread.h>
#include <errno.h>
#include <string.h>

#include "random_search.h"

#define NUM_THREADS 5
#define TARGET 100


int tries;
thread_params th_params[NUM_THREADS];
pthread_t threads[NUM_THREADS];
pthread_mutex_t mutex;

int main(int argc, char *argv[])
{
    int ti;
    int target = TARGET;

    tries = 0;
    pthread_mutex_init(&mutex, NULL);

    printf("Searching for: %d\n", target);

    for (ti = 0; ti < NUM_THREADS; ti++) {
        th_params[ti].target = target;
        th_params[ti].thread_idx = ti;
        pthread_create(&threads[ti], NULL, search, &(th_params[ti]));
    }

    for (ti = 0; ti < NUM_THREADS; ti++) {
        pthread_join(threads[ti], NULL);
    }

    printf("Number of all iterations: %d.\n", tries);
    pthread_mutex_destroy(&mutex);
    return 0;
}

void print_iterations_count(void *arg)
{
    thread_params *thp = (thread_params*) arg;
    printf("The thread no %d: number of iterations: %d\n", thp->thread_idx, thp->iterations_count);
    fflush(stdout);
}

void cancel_other_threads_than(int calling_th_idx)
{
    int e, th_idx;

    for (th_idx = 0; th_idx < NUM_THREADS; th_idx++) {
        if (th_idx == calling_th_idx) {
            continue;
        }
        if ((e = pthread_cancel(threads[th_idx])) != 0) {
            fprintf(stderr, "Error while canceling thread; error: %s\n", strerror(e));
        }
    }
}

void *search(void *arg)
{
    thread_params *th_params = (thread_params *) arg;
    pthread_t thread_id = pthread_self();

    int rnd;

    th_params->iterations_count = 0;
    pthread_cleanup_push(print_iterations_count, th_params);

    srand((int) thread_id);

    pthread_setcancelstate(PTHREAD_CANCEL_ENABLE, NULL);
    pthread_setcanceltype(PTHREAD_CANCEL_DEFERRED, NULL);

    while (1) {
        while (pthread_mutex_trylock(&mutex) == EBUSY) {
            pthread_testcancel();
        }
        pthread_testcancel();
        ++tries;
        pthread_mutex_unlock(&mutex);

        ++(th_params->iterations_count);

        rnd = (rand() % 1000);
        if (th_params->target == rnd) {
            while (pthread_mutex_trylock(&mutex) == EBUSY) {
                pthread_testcancel();
            }
            pthread_testcancel();

            printf("Number found by %d!\n", th_params->thread_idx);
            fflush(stdout);
            cancel_other_threads_than(th_params->thread_idx);

            pthread_mutex_unlock(&mutex);
            break;
        }
    }

    pthread_cleanup_pop(1);
    return ((void *) 0);
}