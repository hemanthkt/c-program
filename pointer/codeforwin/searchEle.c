#include <stdio.h>
void inputArray(int *, int);
void searchEle(int *, int, int);
int main()
{
    int size;
    scanf("%d", &size);
    int arr[size];
    inputArray(arr, size);
    int ele;
    scanf("%d", &ele);
    searchEle(arr, size, ele);
}

void searchEle(int *arr, int size, int ele)
{
    int flag = 0;
    for (int i = 0; i < size; i++)
    {
        if (*arr++ == ele)
        {
            flag = 1;
            printf("Element found");
            break;
        }
    }
    if (flag == 0)
    {
        printf("element not found");
    }
}

void inputArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
}
