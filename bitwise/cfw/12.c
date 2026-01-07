#include <stdio.h>

int main()
{
    int num, one = 0, zero = 0;
    scanf("%d", &num);

    for (int i = 0; i < 32; i++)
    {
        int mask = 1 << i;
        if (num & mask)
        {
            one++;
        }
        else
        {
            zero++;
        }
    }

    printf("Ones: %d\n", one);
    printf("Zeros: %d\n", zero);
}