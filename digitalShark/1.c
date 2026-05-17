#include <stdio.h>
#include <string.h>

int main()
{
    int res = 0;
    int num = 12;
    int pos = 4;
    int n = 3;

    int mask = ((1 << n) - 1) << (pos - n + 1);
    num = num & mask;
    num = num >> (pos - n + 1);
    printf("%d", num);
    return 0;
}
