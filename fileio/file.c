#include <stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("test.txt", "r");

    if (fp == NULL) // is the file does not exist it will throw NULL instaed of address of the file.
    {
        printf("Error: file is not openeing\n");
        return 1;
    }

    printf("File is existing\n");

    char ch;
    // while ((ch = fgetc(fp)) != EOF)
    // {
    //     fputc(ch, stdout);
    // }

    while (ch = fgetc(fp))
    {
        if (feof(fp)) // feof function is similar to comparing EOF as above. if fp reaches EOF it will break
        {
            printf("EOF reached\n");
            break;
        }

        fputc(ch, stdout); // fputc()--> printd a char form the file to stdout
    }
    printf("File offset %ld\n", ftell(fp));
    fclose(fp);

    return 0;
}