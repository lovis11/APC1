#include <stdio.h>

int main() {
  int quantidade;

  printf("Entre com a quantidade de números a serem lidos: ");
  int deu_certo = scanf("%i", &quantidade);

  if (deu_certo && quantidade > 0) {
    int soma = 0;
    for (int i = 1; i <= quantidade; i++) {
      int numero;
      printf("Entre com o %iº número: ", i);
      deu_certo = scanf("%i", &numero);
      if (deu_certo) {
        soma = soma + numero;
      } else {
        printf("Numero inválido! Tente novamente. \n");
        getchar(); // limpa o buffer do teclado (\n)
        i--; //volta 1 repetição
      }
    }
    float media_aritmetica = soma * 1.0f / quantidade;
    printf("A media aritmetica é %.1f\n", media_aritmetica);
  } else {
    printf("Quantidade inválida. Tente novamente.\n");
  }

  return 0;
}
