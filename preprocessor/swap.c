#include <stdio.h>

#define SWAP(type, a, b) \
    {                    \
        type temp = a;   \
        a = b;           \
        b = temp;        \
    }

int main()
{
    int num1, num2;
    scanf("%d%d", &num1, &num2);
    SWAP(int, num1, num2);
    printf("After swapping:\n num1 is %d\n num2 is %d\n", num1, num2);

    short n1, n2;
    scanf("%hd %hd", &n1, &n2);
    SWAP(short, n1, n2);
    printf("After swapping:\n n1 is %d\n n2 is %d\n", n1, n2);

    char c1, c2;
    scanf("%hhd %hhd", &c1, &c2);
    SWAP(char, c1, c2);
    printf("After swapping:\n c1 is %d\n c2 is %d\n", c1, c2);
}