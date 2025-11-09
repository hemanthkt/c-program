#include <stdio.h>
void print_array(int *, int size);
int main()
{
    int size;
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    print_array(arr, size);
}

void print_array(int *ptr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ,", *(ptr + i));
    }
}
