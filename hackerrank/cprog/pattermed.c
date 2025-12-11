#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n;
    scanf("%d", &n);
    // Complete the code to print the pattern.
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%d ", n - j);
        }
        int k = n - i + 1;
        for (int j = 0; j < n - i; j++)
        {
            printf("%d ", k);
        }

        printf("\n");
    }
    return 0;
}
