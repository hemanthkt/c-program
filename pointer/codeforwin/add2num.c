#include <stdio.h>
int main()
{
    int num1, num2;
    scanf("%d%d", &num1, &num2);
    int *ptr1;
    int *ptr2;
    int sum = 0;
    int *ptr3 = &sum;

    ptr1 = &num1;
    ptr2 = &num2;

    *ptr3 = *ptr1 + *ptr2;

    printf("The sum is %d", *ptr3);
}