#include <stdio.h>
int main()
{
    int num = 50;
    int *ptr;
    ptr = &num;

    printf("Address of num %p\n", &num);
    printf("Value at ptr %d\n", *ptr);
    printf("Address of ptr %p", &ptr);
}