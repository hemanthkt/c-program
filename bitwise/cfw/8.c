#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);
    int order = 0;
    for (int i = 0; i < 32; i++)
    {
        int mask = 1 << i;
        if (num & mask)
        {
            printf("Loweset bit is: %d", i);
            return 0;
        }
    }

    return 0;
}