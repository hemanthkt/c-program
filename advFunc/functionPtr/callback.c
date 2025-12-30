#include <stdio.h>
int add(int, int);
int sub(int, int);
int oper(int (*f)(int, int), int num1, int num2);

int main()
{
    int (*fptr)(int, int);

    fptr = add;
    printf("add = %d\n", oper(fptr, 26, 4));

    fptr = sub;
    printf("sub = %d\n", oper(fptr, 12, 4));

    return 0;
}

int oper(int (*f)(int, int), int num1, int num2)
{
    return f(num1, num2);
}

int sub(int num1, int num2)
{
    return num1 - num2;
}

int add(int num1, int num2)
{
    return num1 + num2;
}