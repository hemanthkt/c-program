#include <stdio.h>

int main()
{
    char str1[100];
    char str2[100];

    char *ptr1 = str1;
    char *ptr2 = str2;
    scanf("%s", str1);

    while (*(ptr2++) = *ptr1++)
        ;

    printf("copies string is %s", str2);
}
