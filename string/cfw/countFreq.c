// Input

// Input string: Codeforwin
// Output

// Frequency of all characters in the given string:
// 'c' = 1
// 'd' = 1
// 'e' = 1
// 'f' = 1
// 'i' = 1
// 'n' = 1
// 'o' = 2
// 'r' = 1
// 'w' = 1

#include <stdio.h>
#define MAX_CHARS 100
#define MAX_SIZE 225

int main()
{
    char str[MAX_CHARS];
    scanf("%[^\n]", str);
    int freq[MAX_SIZE];
    for (int i = 0; i < MAX_SIZE; i++)
    {
        freq[i] = 0;
    }
    int j = 0;
    while (str[j] != '\0')
    {
        int asci = (int)str[j];
        freq[asci]++;
        j++;
    }
    printf("Frequence of all charecters:\n");
    for (int i = 0; i < MAX_SIZE; i++)
    {
        if (freq[i] > 0)
        {
            printf("%c = %d\n", i, freq[i]);
        }
    }
}