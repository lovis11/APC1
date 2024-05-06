/*
6. Faça um programa em C que liste todos os múltiplos de 3, entre 1 e 100.
*/

#include <stdio.h>

int main() {
  int numero;
  
  printf("Entre com um número entre 1 e 100: ");
  int deu_certo = scanf("%i", &numero);

  if (deu_certo && numero >= 1 && numero <= 100) {
    printf("Os múltiplos de %i entre 1 e 100 são: \n", numero);
    // for (int i = 1; i <= 100; i++) {
    //  if (i % numero == 0) {
    //    printf("%i, ", i);
    //  }
    //}
    for (int i = numero; i <= 100; i = i + numero) {
      printf("%i, ", i);
    }
    printf("\n");
  } else {
    printf("Número inválido! Tente novamente. \n");
  }


  return 0;
}