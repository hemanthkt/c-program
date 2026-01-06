#include <stdio.h>

int main()
{
#line 100
    printf("This is from file %s at line %d", __FILE__, __LINE__);
    printf("This is from file %s at line %d", __FILE__, __LINE__);
    return 0;
}