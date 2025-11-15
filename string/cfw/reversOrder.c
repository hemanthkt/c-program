#include <stdio.h>
#include <string.h>
void reverse(char[], int, int);
int main()
{
    char str[100];
    scanf("%[^\n]", str);

    int len = strlen(str);
    int start = 0;
    reverse(str, 0, len - 1);

    for (int i = 0; i <= len; i++)
    {
        if (str[i] == ' ' || str[i] == '\0')
        {
            reverse(str, start, i - 1);
            start = i + 1;
        }
    }
    printf("%s", str);
}

void reverse(char str[], int start, int end)
{
    while (start < end)
    {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}
