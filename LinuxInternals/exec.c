#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

// here you need to pass the file path in the argument
int main(int argc, char *argv[])
{
    printf("before\n");
    // execl("/bin/ls", "ls", "-l", "-F", NULL);
    execvp(argv[1], &argv[1]);
    printf("after");
}