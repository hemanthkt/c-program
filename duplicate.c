#include <stdio.h>
int main()
{
    int flag = 0;
    int n;
    int count = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int unq[n];
    unq[0] == arr[0];

    for (int i = 1; i < n; i++)
    {
        flag = 0;
        for (int j = 0; j < count; j++)
        {
            if (arr[i] == unq[j])
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
        {
            unq[count++] = arr[i];
        }
    }

    for (int i = 0; i < count; i++)
    {
        printf("%d ", unq[i]);
    }
}