#include <stdio.h>

struct Student
{
    char name[24];
    unsigned char p, c, m;
};

int main()
{
    int size;
    FILE *fptr;
    fptr = fopen("binary.out", "rb");
    if (fptr == NULL)
    {
        printf("ERROR: FILE DOESNOT EXIT");
        return 1;
    }

    if (fread(&size, 4, 1, fptr) == 0)
    {
        printf("Error while reading size from file");
        return 1;
    }

    struct Student s[size];

    for (int i = 0; i < size; i++)
    {
        if (fread(&s[i], sizeof(struct Student), 1, fptr) == 0)
        {
            printf("Error while copying data");
            return 1;
        }
    }

    float pavg = 0, cavg = 0, mavg = 0;

    if (fread(&pavg, 4, 1, fptr) == 0)
    {
        printf("Error copyin pavg");
        return 1;
    }

    if (fread(&cavg, 4, 1, fptr) == 0)
    {
        printf("Error copyin cavg");
        return 1;
    }

    if (fread(&mavg, 4, 1, fptr) == 0)
    {
        printf("Error copyin mavg");
        return 1;
    }

    const char *strline = "---------------------------------------------------------------";
    printf("%-25s %10s %10s %10s\n", "Name", "Physics", "Chemistry", "Maths");
    printf("\n%s\n", strline);

    for (int i = 0; i < size; i++)
    {
        printf("%-25s %10d %10d %10d\n", s[i].name, s[i].p, s[i].c, s[i].m);
    }

    printf("\n%s\n", strline);

    printf("%-25s %10.2f %10.2f %10.2f", "Average", pavg, cavg, mavg);

    printf("\n%s\n", strline);
}