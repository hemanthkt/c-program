// Input string : I love programming.I love Codeforwin.
// Input character to search : o
// Total occurrences of 'o': 5

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    char ch;
    scanf("%[^\n]", str);
    getchar();
    scanf("%c", &ch);

    int count = -1;
    int len = strlen(str);

    for (int i = 0; i < len; i++)
    {
        if (str[i] == ch)
        {
            count++;
        }
    }

    if (count == -1)
    {
        printf("Charecter is not found");
    }
    else
    {
        printf("Total occurence of %c is: %d", ch, count + 1);
    }
}
