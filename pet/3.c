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

int find_prime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 2; i <= n; i++)
    {
        int reverse = rev(i);
        if (reverse == i)
        {
            if (find_prime(reverse))
            {
                printf("%d ", i);
            }
        }
    }
}
