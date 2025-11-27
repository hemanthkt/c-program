#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;
    // getchar reads single char from stdin
    for (; (ch = getchar()) != EOF;)
    {
        putchar(toupper(ch));
    }

    puts("EOF Received\n");
}