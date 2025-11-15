// Input string: I love Codeforwin.
// Input character to search: o
// Output
// 'o' is found at index 3

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    char ch;
    scanf("%[^\n]", str);
    getchar();
    scanf("%c", &ch);
    int len = strlen(str);

    for (int i = 0; i < len; i++)
    {
        if (str[i] == ch)
        {
            printf("%c is found at index %d", ch, i);
            return 0;
        }
    }

    printf("Charecter not occured");
}
