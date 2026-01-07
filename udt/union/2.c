#include <stdio.h>

union FloatBits
{
    float degree;
    struct
    {
        unsigned m : 23;
        unsigned e : 8;
        unsigned s : 1;

    } elements;
};

int main()
{
    union FloatBits fb = {3.2};

    printf("Sign: %X\n", fb.elements.s);
    printf("exponet: %X\n", fb.elements.e);
    printf("mantissa: %X\n", fb.elements.m);
}