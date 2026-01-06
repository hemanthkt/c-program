#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);

    for (int i = 31; i >= 0; i--)
    {

        int mask = 1 << i;
        if (num & mask)
        {
            printf("Highest order bit: %d", i);
            return 0;
        }
    }

    return 0;
}