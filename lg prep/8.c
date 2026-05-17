#include <stdio.h>

int strEqual(char *str1, char *str2)
{
    int i = 0;
    while (str1[i] && str2[i])
    {
        if (str1[i] != str2[i])
        {
            return 0;
        }
        i++;
    }

    return 1;
}

int main()
{
    char str1[100];
    char str2[100];
    scanf("%s", str1);
    scanf("%s", str2);
    int i = 0;
    while (str1[i])
    {
        if (str1[i] >= 'A' && str1[i] <= 'Z')
        {
            str1[i] = str1[i] + 32;
        }

        i++;
    }
    i = 0;
    while (str2[i])
    {
        if (str2[i] >= 'A' && str2[i] <= 'Z')
        {
            str2[i] = str2[i] + 32;
        }

        i++;
    }

    if (strEqual(str1, str2))
    {
        printf("Strings are equal\n");
    }
    else
    {
        printf("Strings not equal");
    }
}