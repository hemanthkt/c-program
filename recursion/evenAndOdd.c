#include <stdio.h>
void sum(int start, int limit);
int main()
{
    int start, limit;
    scanf("%d", &start);
    scanf("%d", &limit);
    sum(start, limit);
}

void sum(int start, int limit)
{
    if (start > limit)
        return;

    printf("%d ", start);
    sum(start + 2, limit);
}