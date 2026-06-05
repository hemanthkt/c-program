#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int index = 0;

    for (int i = 1; i < argc; i++)
    {

        char *ptr = argv[i];
        while (*ptr)
        {

            if (*ptr == '|')
            {
                index = i;
                *ptr = '\0';
            }
            ptr++;
        }
    }

    int fd[2];
    pipe(fd);
    pid_t pid = fork();

    if (pid > 0)
    {
        pid_t child1 = fork();
        if (child1 > 0)
        {
        }
        else if (child1 == 0)
        {
        }
    }
    else if (pid == 0)
    {
    }
}