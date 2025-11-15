#include <stdio.h>
int count(char *);

int main()
{
    char str[100];
    scanf("%[^\n]", str);
    int ret = count(str);
    printf("No. of words %d", ret);
}

int count(char *str)
{
    int words = 1;
    while (*str)
    {
        if (*str == ' ' || *str == '\0' || *str == '\t')
        {
            words++;
        }

        str++;
    }

    return words;
}
