// threasds attribuites
#include <stdio.h>
#include <pthread.h>

void *fun(void *arg)
{
    for (int i = 0; i < 10; i++, sleep(1))
    {
        printf("Im a fun thread\n");
    }
}

int main()
{
    // 1. create the object variable
    pthread_attr_t my_attr;
    // 2. initialize the attr
    pthread_attr_init(&my_attr);
    // 3. setting the attribuites
    pthread_attr_setdetachstate(&my_attr, PTHREAD_CREATE_DETACHED);

    pthread_attr_setstacksize(&my_attr, 1000000);
    long int size;
    pthread_attr_getstacksize(&my_attr, &size);

    printf("size --> %ld\n", size);

    pthread_t tid;
    pthread_create(&tid, &my_attr, fun, NULL);

    pthread_join(tid, NULL);
    for (int i = 0; i < 10; i++, sleep(1))
    {
        printf("Im a main thread\n");
    }
}