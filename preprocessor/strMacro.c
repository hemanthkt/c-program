#include <stdio.h>

#define MACRO(STR) #STR
#define CONCAT(x, y) x##y

int main()
{
    CONCAT(dou, ble)
    d = 12.5;
    printf("%lf\n", d);

    int num = CONCAT(10, 24);
    printf("%d\n", num);
}
