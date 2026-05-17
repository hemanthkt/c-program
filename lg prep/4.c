#include <stdio.h>

void shiftStr(char *str, int start)
{
    while (str[start])
    {
        if (str[start + 1] != '\0')
        {
            str[start] = str[start + 1];
            start++;
        }
        else
        {
            break;
        }
    }
}

void removeOcc(char *str, char ch)
{
    int i = 0;
    while (str[i])
    {
        if (str[i] == ch)
        {
            shiftStr(str, i);
            continue;
        }
        i++;
    }
}

int main()
{
    char str[100];
    fgets(str, 100, stdin);
    char ch = 'L';

    removeOcc(str, ch);

    printf("%s", str);
}