#include <stdio.h>

int main()
{
    int num, n;
    scanf("%d%d", &num, &n);

    int mask = 1 << n - 1;

    if ((num >> n) & 1)
    {
        printf("Nth bit is set");
    }
    else
    {
        printf("Nth bit is unset");
    }
}