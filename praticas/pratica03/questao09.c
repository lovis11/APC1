/*
9. Faça um programa em C que leia números até ler zero, e imprima o maior e o menor entre eles.
*/

#include <stdio.h>

int main() {
  int numero = 0;
  int maior;
  int menor;
  int numero_valido = 0;

  while (!numero_valido); {
    printf("Entre com um número (0 vai parar): ");
    int deu_certo = scanf("%i", &numero);

    numero_valido = deu_certo && numero != 0;

    if (maior < numero) {
      maior = numero;
    }

    if (menor > numero) {
      menor = numero;
    }
  }

  printf("O maior numero é %i e o menor é %i\n", maior, menor);

  return 0;
}
