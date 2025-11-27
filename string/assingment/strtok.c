#include <stdio.h>
#include <string.h>
#include <stdio_ext.h>

char *my_strtok(char str[], const char delim[]);

int main()
{
    char str[50], delim[50];

    printf("Enter the string  : ");
    scanf("%s", str);

    __fpurge(stdout);

    printf("Enter the delimeter : ");
    scanf("\n%s", delim);
    __fpurge(stdout);

    char *token = my_strtok(str, delim);
    printf("Tokens :\n");

    while (token)
    {
        printf("%s\n", token);
        token = my_strtok(NULL, delim);
    }
}

char *my_strtok(char str[], const char delim[])
{
    static int i = 0;
    int start = i;
    static char *ptr = NULL;

    if (str != NULL)
    {
        ptr = str;
    }

    while (ptr[i] != '\0')
    {
        for (int j = 0; delim[j] != '\0'; j++)
        {
            if (ptr[i] == delim[j])
            {
                ptr[i] = '\0';
                if (ptr[start] != '\0')
                {
                    i++;
                    return &ptr[start];
                }
                else
                {
                    start++;
                    break;
                }
            }
        }
        i++;
    }

    if (ptr[start] != '\0')
    {
        return &ptr[start];
    }
    else
        return NULL;
}