

#include <stdio.h>
int my_strlen(const char *str);
int main()
{
    char str[100];
    scanf("[^\n]", str);
    int ret = my_strlen(str);

    printf("String length is %d", ret);
}

int my_strlen(const char *str)
{
    int c = 0;
    while (*str++)
    {
        c++;
    }
    return c;
}