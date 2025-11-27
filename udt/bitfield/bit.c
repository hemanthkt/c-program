#include <stdio.h>

struct Nibble
{
    unsigned char lower : 6;
    unsigned char lower1 : 6;
    unsigned char upper : 4;
};

int main()
{
    struct Nibble nibble;
    printf("%ld bytes", sizeof(nibble));
}