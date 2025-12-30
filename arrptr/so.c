#include <stdio.h>

void pr_arr(int **ptr)
{
    for (int i = 0; i < 3; i++)
    {
        printf("%d", *ptr[i]);
        printf(" At %p\n", ptr[i]);
    }
}

int main()
{
    int a = 10, b = 20, c = 30;
    int *ptr[3] = {&a, &b, &c};

    pr_arr(ptr);

    return 0;
}