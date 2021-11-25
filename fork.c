#include <stdio.h>
#include <unistd.h>

int main(){

int pid;
pid = fork();
for(;;) printf("%d\n", pid);
}
//remark
