#include <stdio.h>

#define METHOD 2 // checking with value

int main()
{
#if METHOD == 1
    puts("Hello");
#endif

#if METHOD == 2
    printf("Emertxe");
#endif

    return 0;
}