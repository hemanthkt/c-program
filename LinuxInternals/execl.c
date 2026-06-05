#include <stdio.h>
#include <unistd.h>
// here you need to pass the file path in the argument
int main()
{
    printf("before\n");
    // execl("/bin/ls", "ls", "-l", "-F", NULL);
    execl("/mnt/c/Users/hmkt1/OneDrive/Desktop/cprogram/LinuxInternals/b.out", "b.out", NULL);
    printf("after");
}