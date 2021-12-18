#include <stdio.h>

int main(){

  float r ;
  float d ;

  printf("Neste vamos ver como esta sua seu saldo bancario \n");

  printf("Insira um sua renda: ");
  scanf("%f", &r);

  printf("Insira um sua despesa: ");
  scanf("%f", &d);

  if (r-d >= 0)
  printf("Voce esta com saldo positivo \n");
  else 
  printf("Voce precisa de ajuda para administrar sua renda");

  return 0;

}