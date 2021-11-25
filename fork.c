#include <stdio.h>
#include <unistd.h>

void parent(void){
    for(;;) printf("parent");
}

void child(void){
    for(;;) printf("child");
}

int main(){

int pid;
pid = fork();
    if (pid ==0)
    {
       child();
    }
    else{
        parent;
        }

//for(;;) printf("%d\n", pid);
return 0;
}
//remark
