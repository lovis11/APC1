#include <stdio.h>

int main() {
  int numero_inteiro;
  int unidade;
  int dezena;
  int centena;
  int milhar;

  printf("Entre com um numero inteiro: ");
  int deu_certo = scanf("%i", &numero_inteiro);

  unidade = numero_inteiro / 1 % 10;
  dezena = numero_inteiro / 10 % 10;
  centena = numero_inteiro / 100 % 10;
  milhar = numero_inteiro / 1000 % 10;

  printf("O número tem:\n %i unidades\n %i dezenas\n %i centenas\n %i milhares\n", unidade, dezena, centena, milhar);

  return 0;
}