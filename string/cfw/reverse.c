#include <stdio.h>
#include <string.h>
void reverse(char *);
int main()
{
    char str[100];
    scanf("%[^\n]", str);
    reverse(str);
    printf("%s", str);
}

void reverse(char *str)
{
    int len = strlen(str);
    char temp;
    char *strEnd = str + (len - 1);
    while (str <= strEnd)
    {
        temp = *str;
        *str = *strEnd;
        *strEnd = temp;

        str++;
        strEnd--;
    }
}