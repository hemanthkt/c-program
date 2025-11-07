#include <stdio.h>
int main()
{
    int size;
    scanf("%d", &size);
    int n = size - 2;
    int arr1[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr1[i]);
    }
    int last = arr1[size - 1];

    for (int i = 0; i <= n - last; i++)
    {
        arr1[last] = arr1[last + 1];
        last++;
    }

    for (int i = 0; i <= n - last; i++)
    {
        printf("%d", arr1[i]);
    }
}