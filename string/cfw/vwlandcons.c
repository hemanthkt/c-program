// find numbre of vowels and consonant

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
    int vowels = 0;
    int consonant = 0;
    int i = 0;

    while (*str)
    {
        if (*str >= 'a' && *str <= 'z' || *str >= 'A' && *str <= 'Z')
        {
            if (*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' || *str == 'U' || *str == 'O' || *str == 'I' || *str == 'E' || *str == 'A')
            {
                vowels++;
            }
            else
            {
                consonant++;
            }
            *str++;
        }
    }

    printf("Vowels = %d\n ", vowels);
    printf("consonants = %d", consonant);
}