#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(int argc, char *argv[])
{
    int fd[2];

    pipe(fd);

    pid_t pid1 = fork();

    if (pid1 == 0)
    {

        close(fd[0]);

        dup2(fd[1], STDOUT_FILENO);

        close(fd[1]);

        char *cmd1[] = {"ls", NULL};

        execvp(cmd1[0], cmd1);

        perror("execvp");
        exit(1);
    }

    pid_t pid2 = fork();

    if (pid2 == 0)
    {

        close(fd[1]);

        dup2(fd[0], STDIN_FILENO);

        close(fd[0]);

        char *cmd2[] = {"wc", NULL};

        execvp(cmd2[0], cmd2);

        perror("execvp");
        exit(1);
    }

    close(fd[0]);
    close(fd[1]);

    wait(NULL);
    wait(NULL);

    return 0;
}