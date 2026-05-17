#include <stdio.h>
#include <string.h>

int countBits(int n)
{
    int count = 0;

    while (n)
    {
        count = count + (n & 1);
        n = n >> 1;
    }

    return count;
}

int main()
{
    char arr[5] = {10, 20, 30, 40, 50};

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5 - i - 1; j++)
        {
            if (countBits(arr[j]) > countBits(arr[j + 1]))
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", arr[i]);
    }
}
