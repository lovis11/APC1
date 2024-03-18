#include <stdio.h>

int main() {
  float gb;

  printf("Entre com o valor em gb: ");
  int deu_certo = scanf("%f", &gb);

  float bytes = 1024 * 1024 * 1024 * gb;

  printf("O valor em bytes é %f\n", bytes);

  return 0;
  }