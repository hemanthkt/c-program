#include <stdio.h>
#include <string.h>

int main()
{
    char s[50];
    char find[50];
    char replace[50];
    char result[50];
    int r = 0;
    int i = 0;
    scanf("%s%s%s", s, find, replace);

    while (s[i] != '\0')
    {
        if (strncmp(&s[i], find, strlen(find)) == 0)
        {
            for (int k = 0; replace[k] != '\0'; k++)
            {
                result[r++] = replace[k];
            }
            i = i + strlen(find);
        }
        else
        {
            result[r++] = s[i++];
        }
    }
    result[r] = '\0';
    printf("%s", result);
}
