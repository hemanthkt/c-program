#include <stdio.h>

int main()
{
    FILE *fp;
    if ((fp = fopen("tst1.txt", "w+")) == NULL)
    {
        printf("No file");
        return 1;
    }

    int num1 = 20, num2 = 35, num3, num4;

    fwrite(&num1, sizeof(num1), 1, fp);
    fwrite(&num2, sizeof(num2), 1, fp);

    rewind(fp);

    fread(&num3, sizeof(num1), 1, fp);
    fread(&num4, sizeof(num2), 1, fp);

    printf("%d %d", num3, num4);

    fclose(fp);
}