#include <stdio.h>

struct Student
{
    char name[24];
    unsigned char p, c, m;
};

int main()
{
    int size;
    printf("Enter number of students: ");
    scanf("%d", &size);
    int psum = 0, csum = 0, msum = 0;
    struct Student s[size];

    for (int i = 0; i < size; i++)
    {
        printf("\nEnter of name of student %d: ", i + 1);
        // __fpurge(stdin);
        scanf("%s", s[i].name);

        printf("Enter mark (P C M): ");
        scanf("%hhu %hhu %hhu", &s[i].p, &s[i].c, &s[i].m);
        psum += s[i].p;
        csum += s[i].c;
        msum += s[i].m;
    }

    float pavg = (float)psum / size;
    float cavg = (float)psum / size;
    float mavg = (float)psum / size;

    // Write to binary output file
    FILE *fptr = fopen("binary.out", "wb");
    if (fptr == NULL)
    {
        printf("Error in opening file!\n");
        return 1;
    }

    fwrite(&size, sizeof(int), 1, fptr);
    fwrite(s, sizeof(struct Student), size, fptr);
    fwrite(&pavg, sizeof(float), 1, fptr);
    fwrite(&cavg, sizeof(float), 1, fptr);
    fwrite(&mavg, sizeof(float), 1, fptr);

    fclose(fptr);
    printf("\nStored successfully in binary.out file. \n");

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