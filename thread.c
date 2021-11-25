#include <stdio.h>
#include <unistd.h>
#include <pthread.h>

int global = 0xdeadbeef;

void* one(void* arg){
    for(;;) {
        global--;
        printf("one: %x\n", global);
        }
}

void* two(void* arg){
    for(;;) {
        global++;
        printf("two: %x\n", global);
    }
}

int main()
{
   pthread_t tid;

   pthread_create(&tid, NULL, one, NULL);
   pthread_create(&tid, NULL, two, NULL);
    
   pthread_join(tid, NULL);
   return 0;
}
