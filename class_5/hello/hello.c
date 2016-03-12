#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void *print_hello(void *arg);

int main(int argc, char *argv[])
{
    pthread_t thread;
    int rc = pthread_create(&thread, NULL, print_hello, NULL);
    if (rc) {
        printf("Return code: %d\n", rc);
        exit(-1);
    }
    sleep(1);
    return 0;
}

void *print_hello(void *arg)
{
    printf("Next boring 'Hello World!' version!\n");
    return NULL;
}