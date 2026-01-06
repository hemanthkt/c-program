#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);

    if (num & 1)
    {
        printf("LSB is set");
    }
    else
    {
        printf("LSB is not clear");
    }
}