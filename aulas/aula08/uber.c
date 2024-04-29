#include <stdio.h>

int main() {
  int avaliacao;

  printf("Entre com a avaliação do motorista entre 1 a 5: ");
  int deu_certo = scanf("%i", &avaliacao);

  /*
  if (avalicao == 1) {
    printf("O motorista ganhou *\n");
  } else if (avaliacao == 2) {
    printf("O motorista ganhou **\n");
  } else if (avalicao == 3) {
    printf("O motorista ganhou ***\n");
  } else if (avalicao == 4) {
    printf("O motorista ganhou ****\n");
  } else if (avalicao == 5) {
    printf("O motorista ganhou *****\n");
  } else {
    printf("A avaliação é inválida. Tente novamente!\n");
  }
*/
  switch (avaliacao) {
    case 1: printf("O motorista ganhou *\n"); break;
    case 2: printf("O motorista ganhou **\n"); break;
    case 3: printf("O motorista ganhou ***\n"); break;
    case 4: printf("O motorista ganhou ****\n"); break;
    case 5: printf("O motorista ganhou *****\n"); break;
  }

  return 0;
}