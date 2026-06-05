#include <pthread.h>
#include <stdio.h>
#include <unistd.h>

// whenerver creatng a thread you should use void*
void *pizza(void *arg)
{
    for (int i = 1; i <= 3; i++, sleep(1))
    {
        printf("Pizza loading step %d/3\n", i);
    }
    printf("Pizza ready\n");
}

void *pasta(void *arg)
{
    for (int i = 1; i <= 3; i++, sleep(1))
    {
        printf("Pasta loading step %d/3\n", i);
    }
    printf("Pasta ready\n");
}
int main()
{
    pthread_t tid1, tid2;

    pthread_create(&tid1, NULL, pizza, NULL);
    pthread_create(&tid2, NULL, pasta, NULL);

    while (1)
        ;

    // pizza(NULL);
    // pasta(NULL);

    return 0;
}