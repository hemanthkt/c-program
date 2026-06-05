#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <sys/wait.h>

int main()
{
    int fd[2];
    pipe(fd);
    pid_t pid = fork();

    if (pid > 0)
    {
        printf("--->befroe sleep\n");
        sleep(6);
        printf("--->after sleep\n");
    }
    else if (pid == 0)
    {
        printf("Zombie processs\n");
        int z = getpid();
        printf("%d", z);
        sleep(3);
    }
}