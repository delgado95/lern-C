#include <stdio.h>
#include <stdlib.h>

/*Criação função*/
float funcIMC(float a, float p);

int main() {
  float peso, altura;

  printf("Digite o peso: ");
  scanf("%f", &peso);
  printf("Digite a altura: ");
  scanf("%f", &altura);

  /*Chamando a função*/
  float imc = funcIMC(altura, peso); 

  printf("Valor do imc %0.2f \n", imc);
}

/*Definição da função*/
float funcIMC(float a, float p){
  float calculo = p/(a*a);
  return calculo;
}