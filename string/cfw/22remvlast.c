// Input

// Input string : I love programming. I love Codeforwin.
// Input character to remove : 'I'
// Output

// String after removing last 'I' : I love programming. love Codeforwin.
#include <stdio.h>

int main()
{
    char str[100];
    char ch;
    printf("ENter string: ");
    scanf("%[^\n]", str);
    printf("ENter chr to remove: ");
    scanf(" %c", &ch);

    int count = 0;
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == ch)
        {
            count++;
        }
        i++;
    }

    printf("%d\n", count);
    i = 0;
    while (str[i] != '\0')
    {

        if (count == 0)
        {
            int j = i - 1;
            while (str[j] != '\0')
            {
                str[j] = str[j + 1];
                j++;
            }
            break;
        }
        else
        {
            if (str[i] == ch)
            {
                count--;
            }
            i++;
        }
    }

    printf("%s", str);
}