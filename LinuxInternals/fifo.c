#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
// #include <sys/wait.h>
// mkfifo to create fifo
int main()
{
    int fd[2];
    pipe(fd);
    pid_t pid = fork();

    if (pid > 0)
    {
        char str[100] = "hello worlrd";
        close(fd[0]);
        write(fd[1], str, strlen(str) + 1);
        printf("Parent data transfered\n");
        // wait(NULL);
        close(fd[1]);
    }
    else if (pid == 0)
    {
        close(fd[1]);
        char str[100];
        read(fd[0], str, sizeof(str));
        printf("String from parent: %s", str);
        close(fd[0]);
    }
}