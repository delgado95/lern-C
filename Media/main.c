#include <stdio.h>

int main(void) {
  float nota1;
  float nota2;
  float soma;
  float div;

  printf("Vamos fazer a media de suas notas!\n");

  printf("Insira aqui sua primeira nota: \n");
  scanf("%f", &nota1);

  printf("Insira aqui a segunda nota: \n");
  scanf("%f", &nota2);

  soma = nota1 + nota2;
  div = soma / 2;

  printf("A media entre suas notas é = %f", div);

  return 0;
}