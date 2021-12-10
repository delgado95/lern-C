#include <stdio.h>
#include <string.h>

struct Books {
  char title[50];
  char author[50];
  char subject[100];
  int book_id;
};

/*Declarando a função de mostra em tela*/
void printbook( struct Books *book);

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
  
  /*Mostrando o livro 1 passando o endereço*/

  printbook(&Book1);

  /*Mostrando o livro 2 passando o endereço*/
  printbook(&Book2);

  return 0;
}

void printbook( struct Books *book){
 /*Mostrando as informações do livro 1*/
  printf("Book title    : %s\n", book->title);
  printf("Book author   : %s\n", book->author);
  printf("Book subject  : %s\n", book->subject);
  printf("Book id       : %d\n", book->book_id);
}