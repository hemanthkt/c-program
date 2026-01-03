#include <stdio.h>
#define PROD(a, b) (a * b)

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("Product is %d", PROD(a, b));
}