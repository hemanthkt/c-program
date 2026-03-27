#include <stdio.h>

typedef enum
{
    e_red = 1,
    e_blue = 4,
    e_green,
    e_black,
    e_pink
} Color;

int main()
{
    Color e_white = 3, e_black, e_pink;
    printf("white = %d\n", e_white);
    printf("green %d\n", e_green);
    printf("pink %d\n", e_pink);
}