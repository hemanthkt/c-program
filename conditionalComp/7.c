// preprocessor warning
#include <stdio.h>

#define DEBUG_PRINT
#if defined DEBUG_PRINT
#warning "Debug print enabled"
#endif

int main()
{
    int sum, num1, num2;

    printf("ENer 2 number");
    scanf("%d%d", &num1, &num2);

#ifdef DEBUG_PRINT
    printf("The entered values are %d %d\n", num1, num2);
#endif

    sum = num1 + num2;
    printf("The sum is %d", sum);
    return 0;
}