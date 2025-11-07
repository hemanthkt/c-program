#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i < n * 2; i++)
    {

        for (int j = 0; j <= n - i; j++)
        {
            printf(" ");
        }

        if (i > n)
        {
            for (int j = i + 1 - n; j >= 1; j--)
            {
                printf(" ");
            }
        }
        printf("*");
        printf("\n");
    }
}
