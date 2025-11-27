// syntax of struct.

#include <stdio.h>
#include <string.h>

struct StudentInfo
{
    /* data */
    int id;
    char name[20];
    char address[60];
};
int main()
{
    struct StudentInfo s1;
    s1.id = 1;
    strcpy(s1.name, "Hemanth");
    strcpy(s1.address, "Mg road");
    printf("\n---student details---\n");
    printf("%d\n", s1.id);
    printf("%s\n", s1.name);
    printf("%s\n--", s1.address);
    // should intialize and add values at the struct in one shot.
    struct StudentInfo s2 = {2, "Tin", "Emer"};
    printf("%d\n", s2.id);
    printf("%s\n", s2.name);
    printf("%s\n--", s2.address);
    // struct copy
    struct StudentInfo s3;
    s3 = s2;
    printf("%d\n", s3.id);
    printf("%s\n", s3.name);
    printf("%s\n--", s3.address);

    // address printing
    printf("\n---address details---\n");
    printf("%p\n", &s1);
    printf("%p\n", &s3.id);
    printf("%p\n", &s3.name);
    printf("%p\n", &s3.address);

    printf("\n---pointer---\n");

    // pointer in struct
    struct StudentInfo *sptr1 = &s1;

    // arrow operator, pointter
    printf("\n---using arrow function accesing and printing---\n");

    struct StudentInfo *sptr = &s1;
    sptr->id = 11;
    scanf("%s", sptr->name);
    scanf("%s", sptr->address);
    printf("%d\n", sptr->id);
    printf("%s\n", sptr->name);
    printf("%s\n", sptr->address);
}