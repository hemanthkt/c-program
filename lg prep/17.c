// Enter first string: sai
// Enter second string: uma
// Interleaved result: suamia

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100];
    char str2[100];
    char result[100];

    scanf("%s%s", str1, str2);

    int i = 0;
    int j = 0;
    int k = 0;
    int n1 = strlen(str1);
    int n2 = strlen(str2);

    while (str1[i] || str2[j])
    {
        if (i < n1)
            result[k++] = str1[i++];
        if (j < n2)
            result[k++] = str2[j++];
    }

    result[k] = '\0';

    printf("%s", result);
}