// nput

// Input string: Programming in C.
// Output

// String after removing duplicate characters: Progamin C.

#include <stdio.h>

int main()
{
    printf("Enter string: ");
    char str[100];
    int freq[225];
    scanf("%[^\n]", str);

    for (int i = 0; i < 225; i++)
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
    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == ' ')
        {
            i++;
            continue;
        }
        if (freq[str[i]] > 0)
        {
            freq[str[i]] = 0;
            i++;
            continue;
        }

        if (freq[str[i]] == 0)
        {
            int j = i;
            while (str[j] != '\0')
            {
                str[j] = str[j + 1];
                j++;
            }
        }
    }

    printf("%s", str);
}