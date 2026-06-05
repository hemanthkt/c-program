#include <stdio.h>
#include <sys/shm.h>
#include <string.h>

int main()
{
    int id = shmget('a', 100, IPC_CREAT | 0644);
    char *ptr = shmat(id, NULL, 0);

    char buff[100];
    buff[0] = 'h';
    buff[1] = 'i';
    buff[2] = '\0';

    strcpy(ptr, buff);

    shmdt(ptr);
}