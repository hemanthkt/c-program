#include <stdio.h>

#define METHOD 5 // checking with value

int main()
{
#if METHOD == 1
    puts("Hello");
#else
    printf("Emertxe");
#endif

    return 0;
}