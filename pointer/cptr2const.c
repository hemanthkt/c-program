#include <stdio.h>
int main()
{
    int a = 100;
    int b = 125;

    const int *const ptr = &a;
    ptr = &a;
    printf("%d", *ptr);
    // address can be changed
    ptr = &b;
    printf("value now %d", *ptr);
    // value cannot be changed
    *ptr = 50;
}