#include <stdio.h>
void find(char *);
int main()
{
    char str[100];
    scanf("%[^\n]", str);
    find(str);
}

void find(char *str)
{
    int digits = 0;
    int alpha = 0;
    int special = 0;

    while (*str)
    {
        if (*str >= 'a' && *str <= 'z' || *str >= 'A' && *str <= 'Z')
        {
            alpha++;
        }
        else if (*str >= '0' && *str <= '9')
        {
            digits++;
        }
        else
        {
            special++;
        }

        *str++;
    }

    printf("Digits = %d\n", digits);
    printf("Alphabets = %d\n", alpha);
    printf("Special charecters = %d\n", special);
}