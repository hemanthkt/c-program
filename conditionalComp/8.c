// preprocessor warning
#include <stdio.h>

#if defined(STATIC) || defined(DYNAMIC)
#define SIZE 100
#else
#error "Memory not allocated!! Use -D STATIC or DYNAMIC while compling"
#endif

int main()
{
#if defined STATIC
    char buffer[SIZE];
#elif defined DYNAMIC
    char *buffer = malloc(SIZE * sizeof(char));
#endif

#if defined(STAT
}