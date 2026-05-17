#include <stdio.h>
#include <string.h>

int main()
{
    char *str = "malayarigaalam";
    int i = 0;
    int j = strlen(str) - 1;
    while (str[i] != '\0')
    {
        if (str[i] != str[j])
        {
            printf("NOT");
            return 0;
        }
        i++;
        j--;
    }
    printf("PALINDROM");
    return 1;
}
