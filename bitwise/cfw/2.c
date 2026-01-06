#include <stdio.h>

int main()
{
    int mask = 1 << 31;

    int num;
    scanf("%d", &num);

    if (num & mask)
    {
        printf("MSB is set");
    }
    else
    {
        printf("MSB is unset");
    }
}
