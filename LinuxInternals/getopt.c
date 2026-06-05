#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{

    char res;

    while ((res = getopt(argc, argv, "lwc")) > 0)
    {

        printf("ret value : %c\n", res);
    }

    return 0;
}