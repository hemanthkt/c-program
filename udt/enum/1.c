#include <stdio.h>

enum bool
{
    e_false,
    e_true,
    e_t
};

int main()
{
    printf("%d\n", e_false);
    printf("%d\n", e_true);
    printf("%d\n", e_t);
}