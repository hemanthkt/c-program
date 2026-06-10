#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <sys/wait.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Insufficient args");
    }

    int fd = open(argv[1], O_CREAT | O_WRONLY | O_APPEND, 0644);

    pid_t pid = fork();
    if (pid > 0)
    {
        lock_and_write(fd, 1);
    }
    else if (pid == 0)
    {
        lock_and_write(fd, 0);
    }
}