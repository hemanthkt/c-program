#include <stdio.h>

void merge(int arr1[], int arr2[], int arr3[], int size1, int size2)
{
    int i = 0;
    for (i; i < size1; i++)
    {
        arr3[i] = arr1[i];
    }

    for (int j = 0; j < size2; j++)
    {
        arr3[i++] = arr2[j];
    }
}

int main()
{
    int size1 = 3;
    int size2 = 2;

    int arr1[size1];
    int arr2[size2];
    int arr3[size1 + size2];

    for (int i = 0; i < size1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    for (int i = 0; i < size2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    merge(arr1, arr2, arr3, size1, size2);

    for (int i = 0; i < size1 + size2; i++)
    {
        printf("%d ", arr3[i]);
    }
}
