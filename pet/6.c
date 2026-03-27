#include <stdio.h>

int rev(int n)
{
    int rev = 0;
    while (n)
    {
        int temp = n % 10;
        rev = rev * 10 + temp;
        n = n / 10;
    }

    return rev;
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        int reverse = rev(arr[i]);
        if (reverse == arr[i])
        {
            if (arr[i] > max)
            {
                max = arr[i];
            }
        }
    }

    printf("%d", max);
}