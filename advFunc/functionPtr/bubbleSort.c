#include <stdio.h>

int ascend(int a, int b)
{
    return a > b;
}

int descent(int a, int b)
{
    return a < b;
}

int bubble_sort(int *arr, int size, int (*compare)(int, int))
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (compare(arr[i], arr[j]))
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main()
{
    int arr[5] = {2, 4, 5, 3, 1};
    bubble_sort(arr, 5, ascend);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
    bubble_sort(arr, 5, descent);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
}