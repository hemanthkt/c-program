// Input

// Input string: I love programming!
// Input word to search: love
// Output

// 'love' is found at index 2.

#include <stdio.h>
#include <string.h>

int main()
{
    printf("ENter string: ");
    char str[100];
    scanf("%[^\n]", str);
    printf("Enter enter word to search: ");
    char word[100];
    scanf("%s", word);
    int len = strlen(word);
    int count = 0;
    int i = 0, j = 0;
    while (str[i] != '\0' && word[j] != '\0')
    {
        if (count == len)
        {
            break;
        }

        if (str[i] == word[j])
        {
            count++;
            i++;
            j++;
        }
        else
        {
            count = 0;
            i++;
            j = 0;
        }
    }

    printf("%d", i - count);
}