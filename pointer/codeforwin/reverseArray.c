#include <stdio.h>
void reverse(int *, int);
void print_array(int *, int);
int main()
{
    int size;
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    reverse(arr, size);
    print_array(arr, size);
}

void print_array(int *arr, int size)
{
    printf("Reverse array is--> ");
    for (int i = 0; i < size; i++)
    {
        printf("%d, ", arr[i]);
    }
}

void reverse(int *arr, int size)
{
    int temp;
    int *arrEnd = arr + (size - 1);
    while (arr <= arrEnd)
    {
        temp = *arr;
        *arr = *arrEnd;
        *arrEnd = temp;
        arr++;
        arrEnd--;
    }
}