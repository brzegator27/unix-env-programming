typedef struct
{
    int target;
    int thread_idx;
    int iterations_count;
} thread_params;

void *search(void *arg);

void print_iterations_count(void *arg);

void cancel_other_threads_than(int calling_th_idx);