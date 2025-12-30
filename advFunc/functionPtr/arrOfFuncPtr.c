#include <stdio.h>
int add(int, int);
int sub(int, int);
int mul(int, int);
int div(int, int);
int oper(int (*f)(int, int), int num1, int num2);

int main()
{
    int (*fptr[])(int, int) = {add, sub, mul, div};
    printf("add = %d\n", fptr[0](12, 4));
    printf("sub = %d\n", fptr[1](12, 4));
    printf("mul = %d\n", fptr[2](12, 4));
    printf("div = %d\n", fptr[3](12, 4));
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

int mul(int num1, int num2)
{
    return num1 * num2;
}

int div(int num1, int num2)
{
    return num1 / num2;
}