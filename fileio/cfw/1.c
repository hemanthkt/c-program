#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("text.txt", "w");

    char data[1000];

    if (fptr == NULL)
    {
        printf("Couldnt open the file");
        return 0;
    }

    printf("Enter the data to write: ");
    fgets(data, 1000, stdin);

    fputs(data, fptr);
    fclose(fptr);
}