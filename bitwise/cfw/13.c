#include <stdio.h>

int main()
{
    int num, n;
    scanf("%d%d", &num, &n);
    for (int i = 0; i < n; i++)
    {
        int lsb_num = num & 1;
        num = num >> 1;
        num = num | (lsb_num << 31);
        printf("value after rotation %d: %d\n", i, num);
    }
}