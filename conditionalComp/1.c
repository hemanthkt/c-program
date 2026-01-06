#include <stdio.h>
// #define METHOD1
#undef METHOD1

int main()
{
#ifndef METHOD1
    puts("Hello WOrld");
#else
    printf("Enertxe");
#endif
}