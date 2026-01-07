#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d%d", &x, &y);
    printf("x before swapping: %d\n", x);
    printf("y before swapping: %d\n", y);
    x = x ^ y;
    y = x ^ y;
    x = x ^ y;
    printf("x after swapping: %d\n", x);
    printf("y after swapping: %d\n", y);
}