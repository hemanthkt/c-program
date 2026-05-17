#include <stdio.h>

void replace(char *str)
{
    int i = 0;
    int j = 0;
    char result[200];
    while (str[i])
    {
        if (str[i] == 'b' && str[i + 1] == 'b' && str[i + 2] == 'c')
        {
            result[j++] = '$';
            i = i + 3;
        }
        else if (str[i] == 'b' && str[i + 1] == 'b')
        {
            result[j++] = '*';
            i = i + 2;
        }
        else if (str[i] == 'b' && str[i + 1] == 'b' && str[i + 2] == 'e')
        {
            result[j++] = '&';
            i = i + 3;
        }
        else
        {
            result[j++] = str[i++];
        }
    }

    result[j] = '\0';

    for (i = 0; result[i] != '\0'; i++)
    {
        str[i] = result[i];
    }

    str[i] = '\0';

    return;
}

int main()
{
    char str[100];
    scanf("%s", str);

    replace(str);

    printf("%s", str);
}