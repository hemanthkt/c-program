// Input

// Input string: Do you love programming.
// Input character to replace: .
// Input character to replace with: ?
// Output

// String after replacing last '.' with '?' : Do you love programming?

#include <stdio.h>

int main()
{
    printf("ENter string");
    char str[100];
    scanf("%[^\n]", str);
    printf("Enter charecter to repalce: ");
    char old;
    scanf(" %c", &old);
    char new;
    printf("Enter charecter to repalce with: ");
    scanf(" %c", &new);

    int oldPos = -1;
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == old)
        {
            oldPos = i;
        }

        i++;
    }
    i = 0;
    while (str[i] != '\0')
    {
        if (i == oldPos)
        {
            str[i] = new;
            break;
        }

        i++;
    }

    printf("%s", str);
}