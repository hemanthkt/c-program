#include <stdio.h>
int main()
{
    int num = 50;
    int *const ptr = &num;
    *ptr = num;
    int x = 100;
    ptr = &x;
    printf("%d", *ptr);
}