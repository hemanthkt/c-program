#include <stdio.h>
int main()
{
    int aNum, sum = 0, tempNum;
    int n = 0;
    scanf("%d", &aNum);
    int ang = aNum;
    int temp = aNum;
    while (aNum > 0)
    {
        aNum = aNum / 10;
        n++;
    }

    while (temp > 0)
    {
        int mul = 1;
        tempNum = temp % 10;
        for (int i = 0; i < n; i++)
        {
            mul = mul * tempNum;
        }
        sum = mul + sum;
        temp = temp / 10;
    }

    if (sum == ang)
    {
        printf("true\n");
    }
    else
    {
        printf("false\n");
    }
}