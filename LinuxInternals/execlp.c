#include <stdio.h>
#include <unistd.h>
// here you need to only pass the comman name in the argument
// but cannot just put file name inside the argument
int main()
{
    printf("before\n");
    // execl("/bin/ls", "ls", "-l", "-F", NULL);
    execlp("ls", "ls", NULL);
    printf("after");
}