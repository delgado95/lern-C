#include <stdio.h>

int main(void) {
  float nota1;
  float nota2;
  float soma;

  printf("Este programa faz a soma de suas notas!\n");

  printf("Insira aqui sua primeira nota: \n");
  scanf("%f", &nota1);

  printf("Insira aqui a segunda nota: \n");
  scanf("%f", &nota2);

  soma = nota1 + nota2;

  printf("A soma das suas notas é = %f", soma);

  return 0;
}