#include <stdio.h>
#define N 100 
int global;
int Global = 0xff;
char *string = "string";

extern int f();
int main() { 
  f(); 
  return 0;
}
