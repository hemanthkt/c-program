#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    scanf("%[^\n]", str);

    char ch = str[0];
    int count = 0;
    int max = 0;
    int len = strlen(str);

    for (int i = 0; i < len; i++)
    {
        count = 0;
        for (int j = 0; j < len; j++)
        {
            if (str[i] == ' ')
            {
                break;
            }
            if (str[i] == str[j])
            {
                count++;
            }
        }
        if (count > max)
        {
            max = count;
            ch = str[i];
        }
    }

    printf("Highest occurence is %c", ch);
}