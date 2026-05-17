#include <stdio.h>
// 1
// 2 3
// 3 4 5
// 5 6 7 8
int main()
{
    int num = 1;

    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", num++);
        }
        if (num == 2)
        {
            num = num;
        }
        else
        {

            num = num - 1;
        }

        printf("\n");
    }
}