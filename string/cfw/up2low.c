#include <stdio.h>
void upper(char *);

int main()
{
    char str[100];
    scanf("%s", str);

    upper(str);
    printf("%s", str);
}

void upper(char *str)
{
    while (*str)
    {
        *str = (*str == 'A' && *str == 'Z') ? *str + 32 : *str;
        *str++;
    }
}