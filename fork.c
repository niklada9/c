#include <stdio.h>
#include <unistd.h>

void parent(void){
    for(;;) printf("parent\n");
}

void child(void){
    for(;;) printf("child\n");
}

int main(){

int pid;
pid = fork();
    if (pid ==0)
    {
       child();
    }
    else
    {
        parent();
        }

//for(;;) printf("%d\n", pid);
return 0;
}
//remark
