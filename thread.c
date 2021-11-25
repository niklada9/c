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
    one(NULL);
    two(NULL);

    return 0;
}
