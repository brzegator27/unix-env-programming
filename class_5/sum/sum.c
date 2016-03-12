#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <pthread.h>
#include <errno.h>
#include <string.h>

#include "sum.h"

#define LENGTH 1000

int data[2][LENGTH];

pthread_mutex_t mutex;

int main(int argc, char **argv)
{
    pthread_t threads[2];
    th_params **params = malloc(sizeof(th_params *) * 2);

    initialize_data();
    initialize_threads_params(params);
    initialize_threads(threads, params);
    join_and_sum_all(threads, params);

    return 0;
}

void join_and_sum_all(pthread_t threads[2], th_params **params)
{
    int i, sum = 0;

    for (i = 0; i < 2; i++) {
        pthread_join(threads[i], NULL);
        sum += params[i]->sum;
    }

    printf("Sum: %d \n", sum);
}

void initialize_threads(pthread_t threads[2], th_params **params)
{
    int i;
    pthread_attr_t attr;

    pthread_mutex_init(&mutex, NULL);
    pthread_attr_init(&attr);
    pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_JOINABLE);

    for (i = 0; i < 2; i++) {
        pthread_create(&threads[i], &attr, sum_asynch, params[i]);
    }
}

void initialize_threads_params(th_params **params)
{
    int i;

    for (i = 0; i < 2; i++) {
        params[i] = malloc(sizeof(th_params));
        params[i]->row_no = i;
        params[i]->sum = 0;
    }
}

void initialize_data()
{
    pthread_t thread_id = pthread_self();
    int i, j;

    srand((int)thread_id);
    for (i = 0; i < 2; i++) {
        for (j = 0; j < LENGTH; j++) {
            data[i][j] = rand() % 10;
        }
    }
}

void *sum_asynch(void *arg)
{
    int i;
    th_params *params = (th_params*)arg;

    for (i = 0; i < LENGTH; ++i) {
        params->sum += data[params->row_no][i];
    }

    return (void *)0;
}