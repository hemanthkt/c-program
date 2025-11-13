#include <stdio.h>
void ascend_sort(int *, int);
void print_arr(int *, int);
void descend_sort(int *, int);

int main()
{
    int size;
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    ascend_sort(arr, size);
    printf("Ascending-->");
    print_arr(arr, size);
    descend_sort(arr, size);
    printf("descending-->");
    print_arr(arr, size);
}

void print_arr(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d,", *arr++);
    }
    printf("\n");
}

void ascend_sort(int *arr, int size)
{
    int *arrEnd = arr + (size - 1);
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (*(arr + j) > *(arr + (j + 1)))
            {
                int temp = *(arr + j);
                *(arr + j) = *(arr + (j + 1));
                *(arr + (j + 1)) = temp;
            }
        }
    }
}

void descend_sort(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (*(arr + j) < *(arr + (j + 1)))
            {
                int temp = *(arr + j);
                *(arr + j) = *(arr + (j + 1));
                *(arr + (j + 1)) = temp;
            }
        }
    }
}