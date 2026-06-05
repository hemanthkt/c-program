#include <stdio.h>
// Enter the sentence:
// I like apple juice

// Enter the word to find:
// apple

// Enter the replacement word:
// orange

// Updated sentence:
// I like orange juice

int my_strcmp(char str[], char find[], int start)
{
    int i = 0;
    while (str[start] && find[i])
    {
        if (str[start] != find[i])
        {
            return 0;
        }
        start++;
        i++;
    }
    return !find[i];
}

int main()
{
    char str[100];
    char find[100];
    char replace[100];

    char result[100];

    scanf(" %[^\n]", str);

    scanf("%s", find);
    scanf("%s", replace);

    int len = 0;
    int i = 0, k = 0, j = 0;

    while (find[i])
    {
        len++;
        i++;
    }

    i = 0;

    while (str[i])
    {

        if (my_strcmp(str, find, i))
        {
            while (replace[k])
            {
                result[j++] = replace[k++];
            }
            i = i + len;
        }
        else
        {
            result[j++] = str[i++];
        }

        k = 0;
    }

    result[j] = '\0';

    printf("%s", result);
}
