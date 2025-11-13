#include <stdio.h>
int cube(int);
int main()
{
    int n;
    scanf("%d", &n);
    int ret = cube(n);
    printf("%d", ret);
}

int cube(int n)
{
    return n * n * n;
}
