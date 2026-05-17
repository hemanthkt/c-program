// Enter rows and columns: 3 3
// Enter matrix:
// 1 2 3
// 4 5 6
// 7 8 9
// Rotated matrix (90 degrees clockwise):
// 7 4 1
// 8 5 2
// 9 6 3

#include <stdio.h>

int main()
{
    int r, c;
    scanf("%d%d", &r, &c);
    int num = 0;

    int arr[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int j = 0; j < c; j++)
    {
        for (int i = r - 1; i >= 0; i--)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}