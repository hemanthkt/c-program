#include <stdio.h>

int main()
{
    int r, c;
    scanf("%d", &r);
    scanf("%d", &c);

    int arr[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("before trans");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d", arr[i][j]);
        }
        printf("\n");
    }

    // transpose
    printf("Afer trns");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d", arr[j][i]);
        }
        printf("\n");
    }
}
