#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        if (a + b + c > 1)
        {
            count++;
        }
    }
    printf("%d", count);
}
