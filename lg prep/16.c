// Main string: "abcabc"
// Find: "abc"
// Replace: "xyz"
// Output: "xyzxyz"

#include <stdio.h>

int strFind(char *str, char *find, int start, int len2)
{
    int j = 0;
    for (int i = 0; i < len2; i++)
    {
        if (str[start] != find[i])
        {
            return 0;
        }
        start++;
    }

    return 1;
}

int main()
{
    char str[100];
    char find[100];
    char replace[100];
    char result[100];

    scanf("%s%s%s", str, find, replace);

    int len1 = 0, len2 = 0, len3 = 0, i = 0;

    while (str[i])
    {
        len1++;
        i++;
    }
    i = 0;
    while (find[i])
    {
        len2++;
        i++;
    }
    i = 0;
    while (replace[i])
    {
        len3++;
        i++;
    }
    i = 0;
    int j = 0;
    while (str[i])
    {
        if (strFind(str, find, i, len2))
        {
            for (int k = 0; k < len3; k++)
            {
                result[j++] = replace[k];
            }
            i = i + len2;
        }
        else
        {
            result[j++] = str[i++];
        }
    }

    result[j] = '\0';
    printf("%s", result);
}