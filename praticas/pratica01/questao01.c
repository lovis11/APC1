#include <stdio.h>

int main() {
  float notaa1;
  float notaa2;

  printf("Entre com o valor da nota A1: ");
  int deu_certo = scanf("%f", &notaa1);

  printf("Entre com o valor da nota A2: ");
  deu_certo = scanf("%f", &notaa2);

  float mediaa1 = notaa1 * 0.4f;
  float mediaa2 = notaa2 * 0.6f;
  float mediafinal = mediaa1 + mediaa2;

  printf("A media final é %f\n", mediafinal);

  return 0;
}