#include <stdio.h>

int main() {
  int segundos;
  int minutos;
  int horas;

  printf("Entre com o valor em segundos: ");
  int deu_certo = scanf("%i", &segundos);

  minutos = segundos / 60;
  horas = minutos / 60;
  int segundos_restantes = segundos % 60;
  int minutos_restantes = minutos % 60;

  printf("O valor em horas, minutos e segundos é %i:%i:%i\n", horas, minutos_restantes, segundos_restantes);
  

  return 0;
}