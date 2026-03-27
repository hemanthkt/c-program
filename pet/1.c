#include <stdio.h>

int main()
{

    int n;
    int start = 1;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            printf("%d ", start);
            start++;
        }
        printf("\n");
        if (start == 2)
            start = start;
        else
            start = start - 1;
    }
}