#include <stdio.h>
#include <unistd.h>
#include <pthread.h>

void* one(void* arg){
    for(;;) printf("one\n");
}

void* two(void* arg){
    for(;;) printf("two\n");
}

int main()
{
   pthread_t tid;

   phread_create(&tid, NULL, one, HULL);
   phread_create(&tid, NULL, two, HULL);

    return 0;
}
