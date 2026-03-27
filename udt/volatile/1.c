#include <stdio.h>

int main()
{
    long int wait;
    // volatile long int wait;

    unsigned char bit = 0;

    while (1)
    {
        bit = !bit;
        printf("The bit is now: %d\r", bit);
        fflush(stdout);
        for (wait = 0xFFFFFFF; wait--;)
            ; // delay loop
    }
}