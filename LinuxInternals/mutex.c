#include <pthread.h>
#include <stdio.h>
#include <unistd.h>

int count = 0;
// step 1
pthread_mutex_t lock;

void *threads(void *arg)
{
    while (1)
    {
        // step 3
        pthread_mutex_lock(&lock);
        count = 0;
        count += 5;
        count += 10;
        printf("Count: %d\n", count);
        // step 4
        pthread_mutex_unlock(&lock);
    }
}

int main()
{
    pthread_t tid1, tid2;
    // steps to lock and unlock using mutex

    // step 2
    pthread_mutex_init(&lock, NULL);

    pthread_create(&tid1, NULL, threads, NULL);
    pthread_create(&tid2, NULL, threads, NULL);
    pthread_join(tid1, NULL);
    pthread_join(tid2, NULL);

    // step 5
    pthread_mutex_destroy(&lock);
}