#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("text.txt", "r");

    if (fptr == NULL)
    {
        printf("File is not readable");
        return 0;
    }
    char ch;
    while ((ch = fgetc(fptr)) != EOF)
    {
        putchar(ch);
    }

    fclose(fptr);
    return 0;
}