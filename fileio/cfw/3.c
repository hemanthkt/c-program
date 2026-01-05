#include <stdio.h>

int isPrime(int num)
{
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

int isEven(int num)
{
    return num % 2 == 0;
}

int main()
{
    FILE *fptr;
    FILE *eptr;
    FILE *optr;
    FILE *Primeptr;
    fptr = fopen("text.txt", "r");
    eptr = fopen("even.txt", "w");
    optr = fopen("odd.txt", "w");
    Primeptr = fopen("prime.txt", "w");

    int num;

    while (fscanf(fptr, "%d", &num) != EOF)
    {
        if (isPrime(num))
        {
            fprintf(Primeptr, "%d ", num);
        }
        else if (isEven(num))
        {
            fprintf(eptr, "%d ", num);
        }
        else
        {
            fprintf(optr, "%d ", num);
        }
    }
}