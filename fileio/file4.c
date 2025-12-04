#include <stdio.h>

struct Data
{
    int num1;
    char opr;
    int num2;
    char str[10];
    float num3;
};

int main()
{
    struct Data d1 = {2, '-', 1, "hello", 2.25};
    struct Data d2;
    FILE *fp;

    if ((fp = fopen("test.txt", "w+")) == NULL)
    {
        printf("File does not exist");
        return 1;
    }

    fwrite(&d1, sizeof(d1), 1, fp);
    rewind(fp);
    fread(&d2, sizeof(d1), 1, fp);
}
