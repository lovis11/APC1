#include <stdio.h>

int main () {
  printf("------------------------------\n");
  printf("      N O T A  L E G A L      \n");
  printf("------------------------------\n");
  printf("ITEM           QTD     PRECO  \n");

  char item[31] = "Banana prata";
  int qtde = 1;
  float preco = 15.0f;

  printf("%14s %3i %11.2f\n", item, qtde, preco);

  char item2[31] = "Laranja";
  qtde = 10;
  preco = 20.0f;

  printf("%14s %3i %11.2f\n", item2, qtde, preco);

  char item3[31] = "Maça Fuji";
  qtde = 6;
  preco = 30.0f;

  printf("%14s %3i %11.2f\n", item3, qtde, preco);
  
  // printf("Banana prata       1       15.00\n");
  // printf("Laranja            10      20.00\n");
  // printf("Maça Fuji          6       30.00\n");


  return 0;
}