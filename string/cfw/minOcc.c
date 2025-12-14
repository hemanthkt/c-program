// Input
// Input string: I love learning programming at Codeforwin.
// Output
// Minimum occurring character is '.' = 1

#include <stdio.h>
#include <string.h>
#include <limits.h>
#define MAX_CHARS 255
#define MAX_SIZE 100

int main()
{
    char str[100];
    scanf("%[^\n]", str);

    int freq[MAX_CHARS];
    // setting all to 0
    for (int i = 0; i < MAX_CHARS; i++)
    {
        freq[i] = 0;
    }

    int i = 0;
    while (str[i] != '\0')
    {
        int asci = (int)str[i];
        freq[asci]++;
        i++;
    }

    int min = 0;

    for (i = 0; i < MAX_CHARS; i++)
    {
        if (freq[i] != 0)
        {
            if (freq[min] > freq[i] || freq[min] == 0)
            {
                min = i;
            }
        }
    }

    printf("Minimum occuring charecter is %c, %d times", min, freq[min]);
}