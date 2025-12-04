#include <stdio.h>

int main()
{
    FILE *fp;

    char ch;

    fp = fopen("test.txt", "w");
    ch = fgetc(fp);

    if (ferror(fp))
        printf("Error in reading from file : test.txt");

    clearerr(fp);

    if (ferror(fp))
        fprintf(stderr, "error in reading from file: test.txt\n");

    fclose(fp);

    return 0;
}