#include <stdio.h>

int main()
{
    typedef enum
    {
        red = 5,
        blue = 2,
        // blue // not alowed to declare twice in the same scope
    } Color;

    {
        Color blue = 3; // allowed to allow in this scope, because it is in different scope
        printf("blue %d\n", blue);
        printf("red %d\n", red);
    }
}