#include <stdio.h>

int main()
{
    char str[100];
    int len = 0;

    scanf("%s", str);
    int i = 0;
    while (str[i])
    {
        len++;
        i++;
    }

    if (len % 2 == 0)
    {
        int n = len / 2;
        str[n] = '*';
        str[n - 1] = '*';
    }
    else
    {
        int n = len / 2;
        str[n] = '*';
    }

    printf("%s", str);
}