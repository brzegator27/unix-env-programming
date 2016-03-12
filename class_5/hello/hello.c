#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>

volatile int running_threads = 0;
pthread_mutex_t running_mutex = PTHREAD_MUTEX_INITIALIZER;

void *print_hello(void *hello_arg);
int new_hello_th(int th_id);

struct hello_arg
{
    int arg;
};

int main(int argc, char *argv[])
{
    int e, i;

    for (i = 0; i < 10; i++) {
        e = new_hello_th(i);

        if (e == 0) {
            pthread_mutex_lock(&running_mutex);
            ++running_threads;
            pthread_mutex_unlock(&running_mutex);
        }
    }

    while (running_threads > 0) { sleep(1); }

    return 0;
}

int new_hello_th(int th_id)
{
    pthread_t thread;
    int e;
    struct hello_arg *arg = malloc(sizeof(struct hello_arg));

    if (arg == NULL) {
        e = errno;
        fprintf(stderr, "Error while allocating new memory for thread arg; error: %s\n", strerror(e));
        return e;
    }
    arg->arg = th_id;

    int rc = pthread_create(&thread, NULL, print_hello, (void*)arg);
    if (rc) {
        printf("Return code: %d\n", rc);
        return rc;
    }

    return 0;
}

void *print_hello(void *hello_arg)
{
    struct hello_arg *arg = (struct hello_arg*) hello_arg;
    printf("Next boring 'Hello World!' version! Thread Number: %d\n", arg->arg);

    pthread_mutex_lock(&running_mutex);
    --running_threads;
    pthread_mutex_unlock(&running_mutex);

    free(arg);
    return NULL;
}