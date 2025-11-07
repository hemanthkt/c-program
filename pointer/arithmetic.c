#include <stdio.h>
void p(const char *str);
int main()
{
    char *str = "Hello world";
    p(str);
}

void p(const char *str)
{
    while (*str)
    {
        putchar(*str++);
    }
}