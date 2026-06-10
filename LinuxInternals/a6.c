#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <sys/types.h>

int main()
{
    pid_t pid = fork();

    if (pid > 0)
    {
        int status = 0;

        while (waitpid(pid, &status, WNOHANG) == 0)
        {
            sleep(1);
            printf("Parent is running\n");
        }
        printf("Child %d terminated normally with exit status 0 parent terminating\n", pid);
    }
    else if (pid == 0)
    {
        printf("A child is created with pid %d\n", getpid());
        sleep(5);
    }
}