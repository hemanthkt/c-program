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
// we can return value from here but cannot collec. by using the 2nd argument of pthread_join we can collect the return variable

void *kitchen(void *arg)
{
    long int sec = 0;

    // states
    pthread_setcancelstate(PTHREAD_CANCEL_DISABLE, NULL);
    pthread_setcancelstate(PTHREAD_CANCEL_ENABLE, NULL); // default state

    // types
    pthread_setcanceltype(PTHREAD_CANCEL_ASynchr, NULL);
    pthread_setcanceltype(PTHREAD_CANCEL_deffers, NULL); // default type

    for (int i = 1; i <= 3 * ((struct input *)arg)->qty; i++, sleep(1))
    {
        printf("%s loading step %d/3\n", ((struct input *)arg)->food, i);
        sec++;
    }
    printf("%d %s is ready\n", ((struct input *)arg)->qty, ((struct input *)arg)->food);

    // type is converted to void * because
    // return (void *)sec;
}

int main()
{
    pthread_t tid1, tid2;
    struct input var;
    // int second;
    printf("ENter your food: ");
    scanf("%s", var.food);
    printf("ENter your qty: ");
    scanf("%d", &var.qty);

    pthread_create(&tid1, NULL, kitchen, &var);
    // pthread_create(&tid2, NULL, kitchen, &var);
    sleep(5);
    pthread_cancel(tid1); // here the threadd is cancelled after 5 second

    // this function waits for the completion of the thread
    // we dont need to use while(1)
    pthread_join(tid1, NULL);
    // printf("%d\n", second);
    return 0;
}