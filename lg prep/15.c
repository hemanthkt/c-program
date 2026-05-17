#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int l = 0;
    int r = n - 1;

    for (int i = 1; i < n - 1; i++)
    {
        int leftsum = 0;
        int rightsum = 0;

        for (l = 0; l < i; l++)
        {
            leftsum += arr[l];
        }

        for (r = i + 1; r < n; r++)
        {
            rightsum += arr[r];
        }

        if (leftsum == rightsum)
        {
            printf("Equilibrium position is : %d", i);
            break;
        }
    }

    printf("No Equi found");
}