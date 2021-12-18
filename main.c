#include <stdio.h>

int main (){

  int num1;

  printf("Vamos ver se o numero é par ou impar !\n");

  printf("Insira qualquer nuemro inteiro: \n");
  scanf("%d", &num1);

  if (num1%2 == 0)
    printf("é par \n");
  else 
    printf("é impar \n");

  return 0;
  
}