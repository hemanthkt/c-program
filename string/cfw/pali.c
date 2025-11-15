#include <stdio.h>
#include <string.h>

int palindrome(char *, char *);
void copy(char *str1, char *str2);
int main()
{
    char str1[100];
    scanf("%[^\n]", str1);
    char str2[100];

    int ret = palindrome(str1, str2);
}

int palindrome(char *str1, char *str2)
{
    int size = strlen(str1);
    char *strEnd = str1 + size - 1;
    while (str1 <= strEnd)
    {
        if (*str1 != *strEnd)
        {
            break;
        }
        str1++;
        strEnd--;
    }

    if (str1 >= strEnd)
    {
        printf("The string is a palindrome");
    }
    else
    {
        printf("Not a palindrome");
        }
}

void copy(char *str1, char *str2)
{
    char *tmep = str2;
    while (*str1)
    {
        *str2++ = *str1++;
    }

    *str2 = '\0';
}
