#include <stdio.h>

/*Declaração da função*/
int max(int num1, int num2);

int main(){

  /*Declaração da variavel*/
  int a = 100;
  int b = 200;
  int ret;

  /*Chamando a função*/
  ret = max(a, b);

  printf("Max value is: %d\n", ret);

  return 0;
}

/*Função retornando o max entre dois numeros*/
int max(int num1, int num2){

  /*Declaração da variavel*/
  int result;

  if(num1 > num2)
    result = num1;
  else
    result = num2;
  return result;
}
