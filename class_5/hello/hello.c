#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>

volatile int running_threads = 0;
pthread_mutex_t running_mutex = PTHREAD_MUTEX_INITIALIZER;

void *print_hello(void *hello_arg);
int new_hello_th(int th_id, pthread_t* thread);

struct hello_arg
{
    int arg;
};

int main(int argc, char *argv[])
{
    int e, rc, i;
    pthread_t *thread = malloc(sizeof(pthread_t));

    if (thread == NULL) {
        e = errno;
        fprintf(stderr, "Error while allocating new memory for thread; error: %s\n", strerror(e));
        goto cleanup;
    }

    for (i = 0; i < 10; i++) {
        e = new_hello_th(i, thread);

        if (e == 0) {
            pthread_mutex_lock(&running_mutex);
            ++running_threads;
            pthread_mutex_unlock(&running_mutex);
        }
    }

    while (running_threads > 0) { sleep(1); }

    rc = new_hello_th(123, thread);
    if (rc) {
        printf("Return code: %d\n", rc);
        goto cleanup;
    }

    pthread_join(*thread, NULL);
    free(thread);
    return 0;

    cleanup:
        if (thread != NULL) {
            free(thread);
        }
    return 1;
}

int new_hello_th(int th_id, pthread_t *thread)
{
    int e;
    struct hello_arg *arg = malloc(sizeof(struct hello_arg));

    if (arg == NULL) {
        e = errno;
        fprintf(stderr, "Error while allocating new memory for thread arg; error: %s\n", strerror(e));
        return e;
    }
    arg->arg = th_id;

    int rc = pthread_create(thread, NULL, print_hello, (void*)arg);
    if (rc) {
        printf("Return code: %d\n", rc);
        return rc;
    }

    return 0;
}

void *print_hello(void *hello_arg)
{
    sleep(1);

    struct hello_arg *arg = (struct hello_arg*) hello_arg;
    printf("Next boring 'Hello World!' version! Thread Number: %d\n", arg->arg);

    pthread_mutex_lock(&running_mutex);
    --running_threads;
    pthread_mutex_unlock(&running_mutex);

    free(arg);
    return NULL;
}