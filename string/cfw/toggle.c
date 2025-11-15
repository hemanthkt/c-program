#include <stdio.h>
void toggle(char[]);
int main()
{
    char str[100];
    scanf("%[^\n]", str);
    toggle(str);
    printf("%s", str);
}
void toggle(char *str)
{
    int i = 0;
    while (*str)
    {
        if (*str >= 'a' && *str <= 'z')
        {
            *str -= 32;
        }
        else if (*str >= 'A' && *str <= 'Z')
        {
            *str += 32;
        }

        *str++;
    }
}