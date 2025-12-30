// Input

// Input string: I love programming.
// Input character to replace: .
// Input character to replace with: !
// Output

// String after replacing '.' with '!': I love programming!

#include <stdio.h>

int main()
{
    printf("ENter string");
    char str[100];
    scanf("%[^\n]", str);
    printf("Enter charecter to repalce: ");
    char cr;
    scanf(" %c", &cr);
    char rw;
    printf("Enter charecter to repalce with: ");
    scanf(" %c", &rw);
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == cr)
        {
            str[i] = rw;
            break;
        }

        i++;
    }

    printf("%s", str);
}