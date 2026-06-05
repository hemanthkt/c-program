#include <stdio.h>
#include <sys/shm.h>
#include <string.h>

int main()
{
    int id = shmget('a', 100, 0644);
    char *ptr = shmat(id, NULL, 0);

    char buff[100];

    strcpy(buff, ptr);

    printf("data from shm-->%s", buff);

    shmdt(ptr);

    struct shmid_ds info;

    // to get information of the shm
    shmctl(id, IPC_STAT, &info);
    printf("time-->%ld", info.shm_atime);

    // to delete shm
    shmctl(shmid, IPC_RMID, NULL);
}