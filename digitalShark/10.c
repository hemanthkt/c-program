#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int target;
    scanf("%d", &target);

    int arr[n];
    for (int i = 0; i < n; i++)
    {

        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    int i = 0;
    int j = n - 1;

    while (i < j)
    {
        int sum = arr[i] + arr[j];
        if (sum > target)
        {
            j--;
        }
        else if (sum < target)
        {
            i++;
        }
        else if (sum == target)
        {
            printf("%d %d", arr[i], arr[j]);
            return 0;
        }
    }

    printf("No pairs");
}