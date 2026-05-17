#include <stdio.h>

int gcd(int a, int b)
{
    int result = ((a > b) ? a : b);
    int lcm = 0;
    while (1)
    {
        if (result % a == 0 && result % b == 0)
        {
            lcm = result;
            break;
        }
        ++result;
    }

    return lcm;
}

int main()
{
    int a = 15;
    int b = 25;

    int res = gcd(a, b);
    printf("lcm is : %d", res);
}