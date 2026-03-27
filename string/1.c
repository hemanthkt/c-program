#include <stdio.h>

void combination(char[], int, int);
int my_strlen(char[]);
void swap(char[], int, int);
int main()

{
    char str[100];
    int n;
    int res;
    printf("Enter a string: ");
    scanf("%100[^\n]", str);
    n = my_strlen(str);
    combination(str, 0, n - 1);
    return 0;
}
int my_strlen(char *str)
{
    int len = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        len++;
    }
    return len;
}
void swap(char *str, int s, int i)
{
    char temp = str[s];
    str[s] = str[i];
    str[i] = temp;
}
void combination(char *str, int s, int e)
{
    if (s == e)
    {
        printf("%s\n", str);
    }
    else
    {
        for (int i = s; i <= e; i++)
        {
            swap(str, s, i);
            combination(str, s + 1, e);
            swap(str, s, i);
        }
    }
}
