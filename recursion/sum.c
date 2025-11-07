#include <stdio.h>
int fact(int n);
int main()
{
    int n;
    scanf("%d", &n);
    printf("sum of nat is %d ", fact(n));
}

int fact(int n)
{
    if (n == 1)
        return 1;
    return n * fact(n - 1);
}