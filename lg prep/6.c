#include <stdio.h>

int checkMirror(int n, int arr1[], int arr2[])
{
    int i = 0;
    int j = n - 1;

    while (i <= j)
    {
        if (arr1[i] != arr2[j])
        {
            return 1;
        }
        i++;
        j--;
    }

    return 0;
}

int main()
{
    int arr1[4] = {1, 2, 3, 4};
    int arr2[4] = {4, 3, 5, 1};
    int res = checkMirror(4, arr1, arr2);
    if (res == 0)
        printf("Yes\n");
    else
        printf("No\n");
}