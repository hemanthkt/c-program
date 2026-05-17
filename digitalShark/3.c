#include <stdio.h>
#include <string.h>

int main()
{
    int num = 255;
    int setCount = 0;

    for (int i = 31; i >= 0; i--)
    {
        int bit = (num & (1 << i));
        if (bit != 0)
            setCount++;
    }

    printf("%d", setCount);

    if (setCount == 1)
        printf("POWER OF 2");
}
