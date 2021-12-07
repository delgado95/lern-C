#include <stdio.h>

/*Declaração da função*/
void func(void);

static int count = 5; /*Variavel global*/

main(){

  while(count--){
    func();
  }
  return 0;
}

/*Definição da função*/
void func(void){

  static int i = 5; /*Varival estatica local*/

  printf("i é %d e count é %d \n", i, count);
}