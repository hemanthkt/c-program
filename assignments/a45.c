#include <stdio.h>
#include <stdlib.h>
void magic_square(int **square, int n)
{
    int num = 1;
    int row = 0, col = n / 2;
    int nrow, ncol;
    while (num <= n * n)
    {
        square[row][col] = num;
        nrow = (row - 1 + n) % n;
        ncol = (col + 1) % n;
        if (square[nrow][ncol] != 0)
        {
            row = (row + 1) % n;
        }
        else
        {
            row = nrow;
            col = ncol;
        }
        num++;
    }
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n <= 0 || n % 2 == 0)
    {
        printf("Error : Please enter only positive odd numbers\n");
        return 1;
    }
    int **square = (int **)calloc(n, sizeof(int *));
    for (int i = 0; i < n; i++)
    {
        square[i] = (int *)calloc(n, sizeof(int *));
    }
    magic_square(square, n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", square[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < n; i++)
    {
        free(square[i]);
    }
    free(square);
    return 0;
}