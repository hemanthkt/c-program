#include <stdio.h>

int main()
{
    int n1, n2;
    scanf("%d%d", &n1, &n2);

    int arr1[n1];
    int arr2[n2];

    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    for (int i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                printf("Common element: %d", arr1[i]);
            }
        }
    }
}