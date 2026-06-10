#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <sys/types.h>

void pid_print(pid_t pid)
{
    char path[100];
    char line[100];
    FILE *fp;
    sprintf(path, "/proc/%d/status", pid);

    fp = fopen(path, "r");

    if (fp == NULL)
    {
        printf("Process %d is cleared", pid);
    }

    for (int i = 0; i < 3; i++)
    {
        fgets(line, sizeof(line), fp);
        printf("%s", line);
    }
    printf("\n");
    fclose(fp);
}

int main()
{
    pid_t pid = fork();

    if (pid < 0)
    {
        perror("fork");
        exit(0);
    }

    if (pid == 0)
    {
        printf("Child process is running %d", getpid());
        sleep(2);
        exit(0);
    }

    sleep(1);
    pid_print(pid);

    sleep(3);
    pid_print(pid);

    printf("Parent process exiting..");
    exit(0);
}