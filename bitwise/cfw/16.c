#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);
    if (num & 1)
    {
        printf("The num is odd");
    }
    else
    {
        printf("the num is even");
    }
}