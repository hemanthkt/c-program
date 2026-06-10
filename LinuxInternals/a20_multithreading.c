#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <sys/types.h>
#include <pthread.h>

struct input
{
    int start;
    int end;
};

void *factorial(void *arg)
{
    unsigned long int num = 1;

    for (int i = ((struct input *)arg)->start; i <= ((struct input *)arg)->end; i++)
    {
        num = num * i;
    }

    return (void *)num;
}

int main()
{
    pthread_t tid[3];
    struct input var;

    int product = 0;
    long int num = 1;

    printf("Enter the number: ");
    int n;
    scanf("%d", &n);

    var.start = 1;
    var.end = n / 3;
    int end_num = n / 3;

    for (int i = 0; i < 3; i++)
    {
        pthread_create(&tid[i], NULL, factorial, &var);
        pthread_join(tid[i], (void **)&product);
        num = product * num;

        var.start = var.end + 1;
        if (i < 2)
        {
            var.end = var.end + end_num;
        }
        else
        {
            var.end = n;
        }
    }

    printf("Factorial of number %ld\n", num);
}