#include <stdio.h>

int main()
{
    FILE *file;
    char ch;
    int count = 0;

    file = fopen("text.txt", "r");
    if (file == NULL)
    {
        printf("File not found");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF)
    {
        if (ch == 'c')
        {
            long position = ftell(file);
            printf("Position :%ld\n", position - 1);
            count++;
        }
    }

    printf("Total occurance of charecter c is: %d\n", count);
}