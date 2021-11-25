#include <stdio.h>
#include <unistd.h>

void parent(void){
    for(;;) printf("parent %d\n", pid);
}

void child(void){
    for(;;) printf("child %d\n", pid);
}

int main(){

int pid;
pid = fork();
    if (pid ==0)
    {
       child
    }
    else{parent}

//for(;;) printf("%d\n", pid);
return 0;
}
//remark
