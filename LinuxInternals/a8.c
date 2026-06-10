#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

int main()
{
    pid_t child1 = fork();

    if (child1 == 0)
    {
        pid_t child2 = fork();

        if (child2 == 0)
        {
            pid_t child3 = fork();

            if (child3 == 0)
            {
                printf("Child 3 PID = %d\n", getpid());
                exit(0);
            }
            else
            {
                printf("Child 3 with pid %d created\n", child3);
                wait(NULL);
                exit(0);
            }
        }
        else
        {
            printf("Child 2 with pid %d created\n", child2);
            wait(NULL);
            exit(0);
        }
    }
    else
    {
        printf("Child 1 with pid %d created\n", child1);
        wait(NULL);
    }

    return 0;
}