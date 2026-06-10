#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <sys/types.h>

// int execvp(const char *file, char *const argv[]);

int main(int argc, char *argv[])
{
    pid_t pid = fork();

    if (pid == 0)
    {
        printf("This is a child process, with id %d\n", getpid());

        execvp(argv[1], &argv[1]);
        printf("\n");
        printf("Child exited with status 0");
    }
    else
    {
    }
}