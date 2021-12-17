#include <stdio.h>

// Declarando variaveis fora da função
extern int a, b;
extern int c;
extern float f;

int main() {

  /*Definição da variavel*/
  int a, b;
  int c;
  float f;

  /*Atribuição*/
  a = 10;
  b = 20;

  c = a + b;
  printf("O valor de c: %d \n", c);

  f = 70.0/3.0;
  printf("O valor de f: %f \n", f);

  return 0;
}