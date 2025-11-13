#include <stdio.h>
int cmpr(char *, char *);

int main()
{
    char str1[100];
    char str2[100];

    scanf("%s", str1);
    scanf("%s", str2);

    int ret = cmpr(str1, str2);
    printf("%d", ret);
}

int cmpr(char *str1, char *str2)
{
    int len = 0;
    while (str1[len])
    {
        len++;
    }
    int flag = 0;
    int i = 0;
    for (i = 0; i < len; i++)
    {
        if (str1[i] != str2[i])
        {
            flag = 1;
            break;
        }
    }

    return str1[i] - str2[i];
}