#include <stdio.h>

void prime_to_array(int arr[], int n, int *size)
{
    int i = 0;
    arr[i++] = 2;
    int count = 0;
    for (int j = 2; i < n; i++)
    {
        int flag = 0;
        for (int k = j + 1; k < n; k++)
        {
            if (j % k == 0)
            {
                flag == 1;
                break;
            }
        }

        if (!flag)
        {
            count++;
            arr[i++] = j;
        }
    }

    *size = count;
}

int main()
{
    int arr[100];
    int n;
    scanf("%d", &n);
    int size = 0;

    prime_to_array(arr, n, &size);
    int sum = 0;

    for (int i = 0; i < size; i++)
    {

        for (int j = i + 1; j < size - 1; j++)
        {
            int sum = arr[i] + arr[j];
            if (sum == n)
            {
                printf("YES");
            }
        }
    }
}