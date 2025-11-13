#include <stdio.h>
#include <string.h>

void cat(char *str1, char *str2);
int main()
{
    char str1[100];
    char str2[100];

    scanf("%[^\n]", str1);
    getchar();
    scanf("%[^\n]", str2);

    int i = 0;
    while (str1[i] != '\0')
    {
        i++;
    }

    int j = 0;
    while (str2[j] != '\0')
    {
        str1[i++] = str2[j++];
    }

    printf("%s", str1);
}
