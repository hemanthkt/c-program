#include <stdio.h>
#include <stdlib.h>

int fragments(int, int *[]);

int main()
{
    int n;
    printf("Enter no. of rows: ");
    scanf("%d", &n);

    int *arr[n];
    int col[n];
    for (int i = 0; i < n; i++)
    {
        int col[i];
        printf("Enter no of columns in row[%d]", i);
        scanf("%d", &col[i]);

        arr[i] = malloc(col[i] * sizeof(int));

        for (int j = 0; j < col[i]; j++)
        {
            printf("Enter %d values of row[%d]", col[i], i);
            scanf("%d", &arr[i][j]);
        }
    }

    fragments(col[i], arr);
}

int fragments(int n, int *arr[])
{
}