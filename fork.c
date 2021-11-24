#include <stdio.h>
#include <unistd.h>

int main(){

int pid;
pid = fork();

int i;
for(i=1;i<1000;i++) {

printf("%d\n", pid);

}
}
