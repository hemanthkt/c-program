#include <stdio.h>

int main()
{
    FILE *fp1, *fp2;
    char ch;
    fp1 = fopen("text.txt", "r");
    if (fp1 == NULL)
    {
        printf("Error Cannot open source file.\n");
        return 1;
    }

    fp2 = fopen("text_copy.txt", "w");
    if (fp2 == NULL)
    {
        printf("Error Cannot open destination file.\n");
        return 1;
    }

    while ((ch = fgetc(fp1)) != EOF)
    {
        fputc(ch, fp2);
    }

    printf("File copied succesfully");
    fclose(fp1);
    fclose(fp2);
}