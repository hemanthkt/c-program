#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i = 0;
    int sum = 0;
    float avg = 0.0;

    if (argc < 2)
    {
        printf("Error: pass corect no. of arguments\n");
    }

    for (i = 1; i < argc; i++)
    {
        sum = sum + atoi(argv[i]);
    }

    avg = (float)sum / (argc - 1);
    printf("Average: %g\n", avg);

    return 0;
}