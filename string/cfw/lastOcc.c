// Input
// Input string : I love Codeforwin.
// Input character to search : o
// Output
// Last index of 'o' is 12.

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    char ch;
    scanf("%[^\n]", str);
    getchar();
    scanf("%c", &ch);
    int latest = -1;
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        if (str[i] == ch)
        {
            latest = i;
        }
    }

    if (latest == -1)
    {
        printf("No occurence of the charecter");
    }
    else
    {
        printf("Last index of %c is %d", ch, latest);
    }
}