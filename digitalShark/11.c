#include <stdio.h>
#include <stdlib.h>

void my_strcspn(char *temp)
{
    int i = 0;
    while (temp[i] != '\0')
    {
        if (temp[i] == "\n")
        {
            temp[i] = '\0';
        }
        i++;
    }
}

void my_strcpy(char *str, char *temp)
{
    int i = 0;
    while (str[i])
    {
        /* code */
        str[i] = temp[i++];
    }
}

void my_strcmp(char *str1, char *str2)
{
    while (str1[i] && str2[i])
    {
        if (str1[i] > str2[i])
            return str1[i] - str2[i];
        i++;
    }

    return str1[i] - str2[i];
}

int main()
{
    int n;
    scanf("%d", &n);
    char *str[n];
    char temp[100];

    for (int i = 0; i < n; i++)
    {
        fgets(temp, 100, stdin);
        my_strcspn(temp);

        str[i] = (char *)malloc(strlen(temp) + 1);
        my_strcpy(str[i], temp);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (my_strcmp(str[i], str[j]) > 0)
            {
                char *temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}