#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

#include "synch.h"

#define NUM 4
#define LENGTH 100

common_data data;
pthread_mutex_t mutex;

int main(int argc, char *argv[])
{
    long i, correct_sum = 0;
    void *status;
    calc_th_args ths_args[NUM];
    pthread_t threads[NUM];
    pthread_attr_t attr;

    correct_sum =prepare_common_data();

    pthread_mutex_init(&mutex, NULL);
    pthread_attr_init(&attr);
    pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_JOINABLE);

    for (i = 0; i < NUM; i++) {
        ths_args[i].start = i * LENGTH;
        ths_args[i].end = i * LENGTH + LENGTH;
        pthread_create(&threads[i], &attr, calc, (void *)&ths_args[i]);
    }

    pthread_attr_destroy(&attr);

    for (i = 0; i < NUM; i++) {
        pthread_join(threads[i], &status);
    }

    printf("Correct result is: %ld \n", correct_sum);
    printf("Function result is: %ld \n", data.sum);

    cleanup_common_data();
    pthread_mutex_destroy(&mutex);
    return 0;
}

long prepare_common_data()
{
    int e;
    long i, correct_sum = 0;
    long *a = (long *) malloc(NUM * LENGTH * sizeof(long));

    if (a == NULL) {
        e = errno;
        fprintf(stderr, "Error while allocating new memory for array; error: %s\n", strerror(e));
        return -1;
    }

    for (i = 0; i < LENGTH * NUM; i++) {
        a[i] = i;
        correct_sum += i;
    }

    data.veclen = LENGTH;
    data.a = a;
    data.sum = 0;

    return correct_sum;
}

void cleanup_common_data()
{
    if (data.a != NULL) {
        free(data.a);
    }
}

void *calc(void *my_arg)
{
    calc_th_args *arg = my_arg;
    long sum = 0;
    int i;

    for (i = arg->start; i < arg->end; i++) {
        sum += data.a[i];
    }

    pthread_mutex_lock(&mutex);
    data.sum += sum;
    pthread_mutex_unlock(&mutex);

    pthread_exit((void *) 0);
}
