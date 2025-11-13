#include <stdio.h>
void low(char *);
int main()
{

    char str[100];
    scanf("%s", str);

    low(str);
}

void low(char *str)
{

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
    }

    printf("%s", str);
}
