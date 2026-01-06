#include <stdio.h>

#define METHOD1
// #define METHOD2

int main()
{
#if defined(METHOD1)
    puts("Hello");
#endif

#if defined(METHOD2)
    printf("Emertxe");
#endif

#if defined(METHOD1) && defined(METHOD2)
    puts("Linux");
    printf("Operating systems");
#endif
}