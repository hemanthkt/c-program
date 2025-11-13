#include <stdio.h>

int main()
{
    char *str;
    scanf("%[^\n]", str);
    int length = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        length = i + 1;
    }

    printf("%d", length);
}