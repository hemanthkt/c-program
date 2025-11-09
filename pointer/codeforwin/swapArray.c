#include <stdio.h>
void inputArr(int *, int);
void swap(int *, int *, int, int);
void print_array(int *, int);
int main()
{
    int size1, size2;
    scanf("%d %d", &size1, &size2);
    int arr1[size1];
    int arr2[size2];
    inputArr(arr1, size1);
    inputArr(arr2, size2);
    swap(arr1, arr2, size1, size2);
    print_array(arr1, size2);
    print_array(arr2, size1);
}

void print_array(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", *arr++);
    }
    printf("\n");
}

void swap(int *arr1, int *arr2, int size1, int size2)
{
    int *arr1end = arr1 + (size1 - 1);
    int *arr2end = arr2 + (size2 - 1);

    while (arr1 <= arr1end && arr2 <= arr2end)
    {
        *arr1 = *arr1 ^ *arr2;
        *arr2 = *arr1 ^ *arr2;
        *arr1 = *arr2 ^ *arr1;

        arr1++;
        arr2++;
    }
}

void inputArr(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        scanf("%d", arr++);
    }
}