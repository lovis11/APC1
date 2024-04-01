#include <stdio.h>

int main() {
  int anos;
  int meses;
  int dias;

  printf("Entre com o valor em anos:");
  int deu_certo = scanf("%i", &anos);

  printf("Entre com o valor em meses:");
  deu_certo = scanf("%i", &meses);

  printf("Entre com o valor em dias:");
  deu_certo = scanf("%i", &dias);

  int total_dias = anos * 365 + meses * 30 + dias;

  printf("O valor total em dias é %i\n", total_dias);

  return 0;
}