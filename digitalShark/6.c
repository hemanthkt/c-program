#include <stdio.h>
#include <string.h>

struct Book
{
    char author[100];
    char title[100];
    float price;
};

int main()
{
    struct Book books[3];

    for (int i = 0; i < 3; i++)
    {
        printf("Author %d: ", i + 1);
        scanf(" %[^\n]", books[i].author);
        printf("title %d: ", i + 1);
        scanf(" %[^\n]", books[i].title);
        printf("price %d: ", i + 1);
        scanf("%f", &books[i].price);
    }

    int maxP = 0;
    int minP = 0;

    for (int i = 0; i < 3; i++)
    {
        if (books[i].price > maxP)
        {
            maxP = i;
        }

        if (books[i].price < minP)
        {
            minP = i;
        }
    }

    printf("Expensiev book: %s\n", books[maxP].title);
    printf("cheap book: %s\n", books[minP].title);
}
