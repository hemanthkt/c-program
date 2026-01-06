#include <stdio.h>

int main()
{
    int x = 10, y = 20;
// gcc 6.c -D SPACE_OPTIMIZED
// this will compile for this below code
#ifdef SPACE_OPTIMIZED
    x = x ^ y;
    y = x ^ y;
    x = x ^ y;
    printf("Selected space optimization\n");
// gcc 6.c
#else
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("Selected for time optimization");
#endif
}