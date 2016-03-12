typedef struct
{
    long *a;
    long sum;
    int veclen;
} common_data;

typedef struct
{
    long start;
    long end;
} calc_th_args;

void *calc(void *arg);

long prepare_common_data();

void cleanup_common_data();
