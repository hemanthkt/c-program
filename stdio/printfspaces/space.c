#include <stdio.h>

int main()
{
    printf("%3d %3d\n", 1, 1);
    printf("%3d %3d\n", 10, 10);
    printf("%3d %3d\n", 100, 100);

    printf("%10s\n", "Hello");
    printf("%7s\n", "Hello");

    printf("%*d\n", 1, 1);
    printf("%*d\n", 2, 1);
    printf("%*d\n", 3, 1);

    printf("%3.1d\n", 1); //.1 means fill 1 space
    printf("%3.2d\n", 1); //.2 means fill 2 space but only 1 digit is there so it will place a zero instead of space
    printf("%3.3d\n", 1);

    printf("%0.3f\n", 1.0);
    printf("%0.10f\n", 2.50);

    printf("%12.8s\n", "Hello World");

    printf("%#x %#X %#x\n", 12, 15, 10);
    printf("%#o\n", 8);

    printf(" %+06d\n", 123);
    printf(" %.4f %.5s\n", 12.45, "HelloWorld");

    int ret;
    char string[] = "HelloWorld";

    ret = printf("%d", printf("%s", string));
    printf("The previous printf() printted %d chars\n", ret);

    printf("%d %d\n", printf("EMertxe "), printf("Hello World\n")); // R-L exectes

    // sprintf
}