#include <stdio.h>

int main () {
  float nota1;
  float nota2;

  printf("Entre com a primeira nota:");
  int deu_certo = scanf("%f", &nota1);

  // 0.0f <= nota1 <= 10.0f
  if (nota1 >= 0.0f && nota1 <= 10.0f) {
    printf ("Entre com a segunda nota:");
    deu_certo = scanf("%f", &nota2);
    if (nota2 >= 0.0f && nota2 <= 10.0f && deu_certo) {
      float media = 0.4f * nota1 + 0.6f * nota2;
      printf("Media: %.1f\n", media);

      if (media >= 9.0f && media <= 10.0f) {
        printf("A mensão é Superior (SS)\n");
      } else if (media >= 7.0f && media <= 8.9f) {
        printf("A mensão é Médio Superior (MS)\n");
      } else if (media >= 5.0f && media <= 6.9f) {
        printf("A mensão é Médio (MM)\n");
      } else if (media >= 3.0f && media <= 4.9f) {
        printf("A mensão é Médio Inferior (MI)\n");
      } else if (media >= 0.1f && media <= 2.9f) {
        printf("A mensão é Inferior (II)\n");
      } else if (media == 0.0f) {
        printf("A mensão é Sem Rendimento (SR)\n");
      }
    
    
    } else {
        printf("A segunda nota é invalida!\n");
      }
    } else {
      printf("A primeira nota é invalida!\n");
    }

  
  return 0;
}