#include <stdio.h>

struct Bank
{
    char name[100];
    int accNum;
    float balance;
    int history[100];
    int hcount;
};

int main()
{
    struct Bank b;

    printf("Enter Name: ");
    scanf("%s", b.name);
    printf("Enter Acc NUmber: ");
    scanf("%d", &b.accNum);

    b.balance = 0;
    b.hcount = 0;

    int choice, amt;

    while (1)
    {
        printf("\n1.Deposit 2.Withdraw 3.History 4.Exit\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Amount to Deposit: ");
            scanf("%d", &amt);
            b.balance = b.balance + amt;
            b.history[b.hcount++] = amt;
            break;
        case 2:
            printf("Amount to withdraw: ");
            scanf("%d", &amt);
            b.history[b.hcount++] = -amt;
            b.balance = b.balance - amt;
            break;
        case 3:
            printf("History: \n");
            for (int i = 0; i < b.hcount; i++)
            {
                printf("%d\n", b.history[i]);
            }
            break;
        case 4:
            break;

        default:
            break;
        }

        if (choice == 4)
        {
            printf("Exiting...");
            break;
        }
    }
}