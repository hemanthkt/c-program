#include <stdio.h>

struct Car
{
    char brand[100];
    char model[100];
    int year;
};

int main()
{
    int n;
    scanf("%d", &n);

    struct Car cars[n];

    for (int i = 0; i < n; i++)
    {
        getchar();
        scanf("%[^\n]", cars[i].brand);
        getchar();
        scanf("%[^\n]", cars[i].model);
        scanf("%d", &cars[i].year);
    }

    for (int i = 0; i < n; i++)
    {
        printf("Brand: %s\n", cars[i].brand);
        printf("Model: %s\n", cars[i].model);
        printf("Year: %d\n", cars[i].year);
    }

    int maxYear = 0;
    int maxInd = 0;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (cars[i].year > cars[j].year)
            {
                struct Car temp = cars[i];
                cars[i] = cars[j];
                cars[j] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("Brand: %s, Model:%s, Year:%d", cars[i].brand, cars[i].model, cars[i].year);
    }
}
