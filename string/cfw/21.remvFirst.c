// Input

// Input string: I Love programming. I Love Codeforwin. I Love India.
// Input character to remove: 'I'
// Output

// Love Programming. I Love Codeforwin. I Love India.

#include <stdio.h>

int main()
{
    char str[100];
    printf("ENter string: ");
    scanf("%[^\n]", str);
    char ch;
    printf("ENter chare to remove: ");
    scanf(" %c", &ch);
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == ch)
        {
            int j = i;
            while (str[j] != '\0')
            {
                str[j] = str[j + 1];
                j++;
            }

            break;
        }
        i++;
    }

    printf("%s", str);
}