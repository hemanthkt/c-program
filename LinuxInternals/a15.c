#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include <time.h>

/*
--> a.out 17:40:00 date is optional
    if day not mentioned use the current date/particuar day
--> a.out 17:40:00 09/06/2026

to get current time
    cur_time = time(NULL); or time(&cur_time);

user will pass string from cla so we need to convert to stucture format usig strptime

    1. char *strptime(const char *restrict s, const char *restrict format,struct tm *restrict tm);
    struct tm var;

    -- To convert time
    strptime(argv[1], "%H:%M:%S", &var)
     or
    strptime(argv[1], "%T", &var)
    -- To convert date
    strptime(argv[2], "%D", &var)

    2. -->using strptime we converted the time to structure format and using
       mktime() we will convert the time to total number of seconds

     user_time = mktime(&var);

    3. alarm(user_time - cur_time);

    (if user did not mentioned date use current date for that use loacltime() to get the current date)
    4. localtime() -- this will give current date, month, year
        ptr = localtime();

*/

// struct tm {
//     int tm_sec;        /* seconds */
//     int tm_min;        /* minutes */
//     int tm_hour;       /* hours */
//     int tm_mday;       /* day of the month */
//     int tm_mon;        /* month */
//     int tm_year;       /* year */
//     int tm_wday;       /* day of the week */
//     int tm_yday;       /* day in the year */
//     int tm_isdst;      /* daylight saving time */
// };

int flag = 0;

void signalHandler(int sig)
{
    flag = 1;
}

int main(int argc, char *argv[])
{
    /*
    1. reg the signal
    2. validate the time(curr time > user time)
    3. check whether date is passed or not
        if passed -- strptime() for time
                     strptime() for date

        else if not passed -- strptime() for time
                              struct tm *ptr = localtime(); the current time si colected to a structure pointer

                              var.tm_day = ptr->tm_day;
                              var.tm_man = ptr->tm_mon;
                              var.tm_year = ptr->tm_year;
    4. user_time = mktime(&var);
    5. alarm(user_time - cur_time);
    6. in handler take a flag and set to 1;
        void signal_handler(){
            flag = 1;
        }
    7. if(flag){
        wake up alarm occurs
            1.snooze(read the time in minutes) | 2.exit
        }
    */

    signal(SIGINT, signalHandler);
}