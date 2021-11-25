#include <stdlib.h>
#include <stdio.h>

int global;
int Global = 0;
const int GLOBAL = 0xdeadbeef;

int main (int argc, char *argv[]) {

int i;
//int (*g)(void) = &GLOBAL;

printf("global -> %x\n", (unsigned int)&global); 
printf("Global -> %x\n", (unsigned int)&Global);
printf("GLOBAL -> %x\n", (unsigned int)&GLOBAL);
printf("i -> %x\n", (unsigned int)&i);
printf("argc -> %x\n", (unsigned int)&argc);
printf("argv -> %x\n", (unsigned int)&argv);
printf("main -> %x\n", (unsigned int)&main);

//g();

for(;;);

exit(0);

 };
