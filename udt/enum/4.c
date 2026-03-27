#include <stdio.h>

typedef enum
{
    red,
    blue,
    green
} Color;

int main()
{
    Color c;

    printf("%zu bytes\n", sizeof(Color));
    printf("%zu bytes\n", sizeof(c));
}