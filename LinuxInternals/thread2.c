#include <pthread.h>
#include <stdio.h>
#include <unistd.h>

// whenerver creatng a thread you should use void*
void *kitchen(void *arg)
{
    for (int i = 1; i <= 3; i++, sleep(1))
    {
        printf("%s loading step %d/3\n", (char *)arg, i);
    }
    printf("%s ready\n", (char *)arg);
}

int main()
{
    pthread_t tid1, tid2;

    pthread_create(&tid1, NULL, kitchen, "pasta");
    pthread_create(&tid2, NULL, kitchen, "pizza");

    while (1)
        ;

    // pizza(NULL);
    // pasta(NULL);

    return 0;
}