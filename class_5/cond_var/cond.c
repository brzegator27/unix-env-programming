#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

#define MAXVAL 100

int global_variable = 0;
pthread_mutex_t mutex;
pthread_cond_t cond;

void *increment(void *);

void *print_info(void *);

int main()
{
    pthread_t t1, t2, t3;
    pthread_attr_t attr;

    pthread_mutex_init(&mutex, NULL);
    pthread_cond_init(&cond, NULL);
    pthread_attr_init(&attr);
    pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_JOINABLE);

    pthread_create(&t1, &attr, increment, NULL);
    pthread_create(&t2, &attr, increment, NULL);
    pthread_create(&t3, &attr, print_info, NULL);

    pthread_join(t1, NULL);
    printf("t1 finished!\n");
    pthread_join(t2, NULL);
    printf("t2 finished!\n");
    pthread_join(t3, NULL);
    printf("t3 finished!\n");

    printf("Finishing...\n");
    return 0;
}

void *increment(void *arg)
{
    // How to put while condition within mutex
    // when there are two threads???
    while (global_variable < MAXVAL) {
        pthread_mutex_lock(&mutex);
        ++global_variable;
        pthread_mutex_unlock(&mutex);

        if (global_variable >= MAXVAL) {
            pthread_cond_signal(&cond);
        }
    }
    pthread_exit((void *) 0);
}

void *print_info(void *arg)
{
    pthread_mutex_lock(&mutex);

    while (global_variable < MAXVAL) {
        pthread_cond_wait(&cond, &mutex);
    }
    printf("Global variable value is %d\n", global_variable);

    pthread_mutex_unlock(&mutex);
    pthread_exit((void *) 0);
}