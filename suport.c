#include <stdio.h>   

extern int count;

void write_extern(void){
  printf("count é %d\n", count);
}