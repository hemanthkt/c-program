#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char str[1000];
    scanf("%[^\n]", str);

    int freq[256];
    for (int i = 0; i < 256; i++)
    {
        freq[i] = -1;
    }
    int i = 0;
    while (str[i] != '\0')
    {
        freq[str[i]]++;
        i++;
    }
    for (int j = 0; j < 256; j++)
    {
        if (freq[j] != -1)
        {
            printf("%d ", freq[j]);
        }
    }
    return 0;
}