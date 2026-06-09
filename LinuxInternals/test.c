#define _XOPEN_SOURCE 700
#include <unistd.h>
#include <signal.h>
#include <time.h>
#include <stdio.h>
#include <string.h>

int flag = 0;

void signalHandler(int sig)
{
    flag = 1;
}

int main(int argc, char *argv[])
{

    signal(SIGALRM, signalHandler);

    time_t curr_time = time(NULL);
    struct tm var = *localtime(&curr_time);

    strptime(argv[1], "%T", &var);
    time_t user_time = mktime(&var);
    time_t user_date;

    // printf("Curr time %ld\n", curr_time);
    // printf("User time %ld\n", user_time);

    if (user_time < curr_time)
    {
        printf("Input time should be greater than Current time\n");
        return 0;
    }

    if (argc > 2)
    {
        strptime(argv[1], "%T", &var);
        strptime(argv[2], "%D", &var);
        user_time = mktime(&var);
    }
    else
    {
        strptime(argv[1], "%T", &var);
        time_t c_time = time(NULL);
        struct tm *ptr = localtime(&c_time);
        var.tm_mday = ptr->tm_mday;
        var.tm_mon = ptr->tm_mon;
        var.tm_year = ptr->tm_year;
        user_time = mktime(&var);
    }

    printf("Current time: %ld\n", curr_time);
    printf("User time: %ld\n", user_time);

    time_t t = user_time - curr_time;
    alarm(t);
    pause();
    if (flag)
    {
        printf("ALARM on");
    }
}