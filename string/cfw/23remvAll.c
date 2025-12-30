// Input string : I Love Programming. I Love Codeforwin.
// Input character to remove : 'I'
// Output

// String after removing all 'I' : Love Programming. Love Codeforwin.

#include <stdio.h>

int main()
{
    printf("Enter string: ");
    char str[100];
    scanf("%[^\n]", str);
    printf("ENter charecter: ");
    char ch;
    scanf(" %c", &ch);
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == ch)
        {
            str[i] = str[i + 1];
            i--;
        }
        i++;
    }

    printf("%s", str);
}