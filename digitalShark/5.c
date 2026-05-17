// Main String:      I love programming in C
// Substring:        programming
// New String:       coding

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100] = "I love programming in C";
    char str2[100] = "programming";
    char str3[100] = "coding";

    int i = 0;
    int j = 0;
    while (str1[i] != '\0' && str2[j] != '\0')
    {
        if (str1[i] == str2[j])
        {
            j++;
            i++;
        }
        else
        {
            j = 0;
            i++;
        }
    }
}
