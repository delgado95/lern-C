#include <stdio.h>

const int CITY = 2;
const int WEEk = 7;

int main (){

  int temperature[CITY][WEEk];

  for (int i = 0; i < CITY; ++i){
    for (int j = 0; j < WEEk; ++j){
      printf("City %d, Day %d: ", i + 1, j + 1);
      scanf("%d", &temperature[i][j]);
    }
  }
  printf("\n Displaying values: \n\n");

  for (int i = 0; i < CITY; ++i){
    for (int j = 0; j < WEEk; ++j){
      printf("City %d, Day %d = %d\n", i + 1, j + 1, temperature[i][j]);
    }
  }
  return 0;
}