// here we cannot pass multiple arguments so we use structure and pass the struct

#include <pthread.h>
#include <stdio.h>
#include <unistd.h>

struct input
{
    char food[50];
    int qty;
};

// whenerver creatng a thread you should use void*
void *kitchen(void *arg)
{
    for (int i = 1; i <= 3 * ((struct input *)arg)->qty; i++, sleep(1))
    {
        printf("%s loading step %d/3\n", ((struct input *)arg)->food, i);
    }
    printf("%d %s is ready\n", ((struct input *)arg)->qty, ((struct input *)arg)->food);
}

int main()
{
    pthread_t tid1, tid2;
    struct input var;

    printf("ENter your food: ");
    scanf("%s", var.food);
    printf("ENter your qty: ");
    scanf("%d", &var.qty);

    pthread_create(&tid1, NULL, kitchen, &var);
    pthread_create(&tid2, NULL, kitchen, &var);

    while (1)
        ;

    // pizza(NULL);
    // pasta(NULL);

    return 0;
}