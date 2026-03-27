#include <stdio.h>
struct student
{
    char name[20];
    unsigned char p, c, m;
};
int main()
{
    int n;

    printf("Enter the number of students : ");
    scanf("%d", &n);
    struct student s[n];
    int psum = 0, csum = 0, msum = 0;
    for (int i = 0; i < n; i++)
    {
        printf("Enter the name of the student : ");
        scanf(" %[^\n]", s[i].name);
        printf("Enter P, C and M marks : ");
        scanf("%hhu %hhu %hhu", &s[i].p, &s[i].c, &s[i].m);
        psum += s[i].p;
        csum += s[i].c;
        msum += s[i].m;
    }
    float pavg = (float)psum / n;
    float cavg = (float)csum / n;
    float mavg = (float)msum / n;
    const char *strline = "--------------------------------------";
    printf("\n%s\n", strline);
    printf("%-25s %10s %10s %10s\n", "Name", "Physics", "Chemistry", "Maths");
    printf("\n%s\n", strline);
    for (int i = 0; i < n; i++)
    {
        printf("%-25s %10d %10d %10d\n", s[i].name, s[i].p, s[i].c, s[i].m);
    }
    printf("\n%s\n", strline);
    printf("%-25s %10.2f %10.2f %10.2f\n", "Average", pavg, cavg, mavg);
    printf("\n%s\n", strline);
    return 0;
}
- 64