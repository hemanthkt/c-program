// Input

// Input string: I_love_learning_at_Codeforwin.
// Input character to replace: _
// Input character to replace with: -
// Output

// String after replacing '_' with '-': I-love-learning-at-Codeforwin

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
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == old)
        {
            str[i] = new;
        }
        i++;
    }
    printf("%s", str);
}