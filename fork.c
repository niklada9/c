#include <stdio.h>
#include <unistd.h>

int global = 0xdeadbeef;

void parent(void){
    for(;;) printf("parent: %d\n", global);
}

void child(void){
    for(;;) printf("child: %d\n", global);
}

int main(){

int pid;
pid = fork();
    if (pid ==0)
    {
       global = 1;
       child();
    }
    else
    {
        global = -1;
        parent();
        }

//for(;;) printf("%d\n", pid);
return 0;
}
//remark
