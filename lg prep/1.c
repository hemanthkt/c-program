#include <stdio.h>
// 5 5 3 1 4 -2 The smallest positive number missed is: 2
int main()
{
    int n;
    scanf("%d :", &n);

    int arr[n];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    int i = 0;

    for (int k = 0; k < n; k++)
    {
        if (arr[k] < 0)
        {
            i++;
            continue;
        }
        else
        {
            break;
        }
    }

    int expected = 1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == expected)
        {
            expected++;
        }
        else if (arr[i] > expected)
        {
            break;
        }
    }

    printf("Missing number is: %d", expected);
}
