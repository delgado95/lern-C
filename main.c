#include <stdio.h>
#include <string.h>

struct Books {
  char title[50];
  char author[50];
  char subject[100];
  int book_id;
};

int main () {

  struct Books Book1; /*Declaração dos tipos de book*/
  struct Books Book2;

  /*Especificação do livro 1*/
  strcpy( Book1.title, "Star Wars");
  strcpy( Book1.author, "Jorge Lucas");
  strcpy( Book1.subject, "Uma viagem muito louca !");
  Book1.book_id = 1;
  
  /*Especificação do livro 2*/
  strcpy( Book2.title, "Homem Aranha");
  strcpy( Book2.author, "Stan Lee");
  strcpy( Book2.subject, "O amigo da vizinhaça !");
  Book2.book_id = 2;
  
  /*Mostrando as informações do livro 1*/
  printf("Book 1 title    : %s\n", Book1.title);
  printf("Book 1 author   : %s\n", Book1.author);
  printf("Book 1 subject  : %s\n", Book1.subject);
  printf("Book 1 id       : %d\n", Book1.book_id);

  /*Mostrando as informações do livro 2*/
  printf("Book 2 title    : %s\n", Book2.title);
  printf("Book 2 author   : %s\n", Book2.author);
  printf("Book 2 subject  : %s\n", Book2.subject);
  printf("Book 2 id       : %d\n", Book2.book_id);

  return 0;
}