#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include <time.h>
#include <string.h>

void signalhandler()
{
}

int main()
{
    pid_t pid = fork();

    signal(SIGCHLD, signalhandler);

    if (pid > 0)
    {
        sleep(20);
    }
    else if (pid == 0)
    {
        sleep(5);
    }
}
