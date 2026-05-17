// 20. If Zero Found in 2D Matrix → Make That Row & Column Zero
// 3 3

// 1 2 3
// 4 0 6
// 7 8 9

// 1 0 3
// 0 0 0
// 7 0 9

#include <stdio.h>

int main()
{
    int r, c;
    scanf("%d%d", &r, &c);
    int num = 0;

    int arr[r][c];
    int zrow = -1;
    int zcol = -1;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
            if (arr[i][j] == 0)
            {
                zrow = i;
                zcol = j;
            }
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i == zrow || j == zcol)
            {
                arr[i][j] = 0;
            }
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}