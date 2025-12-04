#include <stdio.h>

int main()
{
    FILE *fp;
    int num1, num2;
    float num3;
    char str[10], opr, ch;

    if ((fp = fopen("tst1.txt", "w+")) == NULL)
    {
        return 1;
    }
    // fprintf prints all values to other file. in this case fp hold the
    //  value of file address tst1.txt. so it will give all the values to the
    //  tst1.txt location.
    fprintf(fp, "%d %c %d %s %f\n", 2, '-', 1, "xc", 2.1);
    // the offset would be on th last charecter or th EOF
    // so we need to rewind the offset pointer to te begining.
    // rewind(fp);
    // SEEK_SET is a macro that is used to set the offset from bgining.
    fseek(fp, 0, SEEK_SET);
    // fscanf reads all the input from the txt1.txt and assingns to
    // the variables from the address of file tst1.txt
    fscanf(fp, "%d %c %d %s %f", &num1, &opr, &num2, str, &num3);
    printf("%d %c %d %s %f\n", num1, opr, num2, str, num3);
}