#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int cmp(const void *a, const void *b)
{
    printf("---- cmp called ----\n");

    printf("Raw pointers:\n");
    printf("a = %p, b = %p\n", a, b);

    // Cast step
    char **p1 = (char **)a;
    char **p2 = (char **)b;

    printf("After casting to char**:\n");
    printf("p1 = %p, p2 = %p\n", p1, p2);

    // Dereference step
    char *s1 = *p1;
    char *s2 = *p2;

    printf("After dereferencing:\n");
    printf("s1 = %s, s2 = %s\n", s1, s2);

    int result = strcmp(s1, s2);
    printf("strcmp result = %d\n", result);

    return result;
}

int main()
{
    char *strs[] = {"dog", "cat", "apple"};
    int n = 3;

    qsort(strs, n, sizeof(char *), cmp);

    printf("\nSorted result:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", strs[i]);
    }

    return 0;
}