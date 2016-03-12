typedef struct
{
    int row_no;
    int sum;
} th_params;

void initialize_data();

void initialize_threads_params(th_params **params);

void initialize_threads(pthread_t threads[2], th_params **params);

void join_and_sum_all(pthread_t threads[2], th_params **params);

void *sum_asynch(void *arg);
