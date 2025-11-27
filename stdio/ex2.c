#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;
    // getchar reads single char from stdin
    for (; (ch = getc(stdin)) != EOF;)
    {
        putc(toupper(ch), stdout);
    }

    puts("EOF Received\n");
}