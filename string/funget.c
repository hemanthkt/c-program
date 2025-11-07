#include <stdio.h>
#include <stdlib.h>
int main()
{
    char str[100];
    scanf("%[^\n]", str);
    printf("The string entered is --> %s\n", str);
    return 0;
}