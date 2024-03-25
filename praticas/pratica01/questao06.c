#include <stdio.h>
#include <math.h>

int main() {
  int a;
  int b;
  int c;

  printf("Entre com o valor de a: ");
  int deu_certo = scanf("%i", &a);

  printf("Entre com o valor de b: ");
  deu_certo = scanf("%i", &b);

  printf("Entre com o valor de c: ");
  deu_certo = scanf("%i", &c);

  double delta = pow(b, 2) - 4 * a * c;
  printf("O valor de delta é %.2f\n", delta);
  
  double x1 = (-b + sqrt(delta)) / (2 * a);
  
  
  double x2 = (-b - sqrt(delta)) / (2 * a);
  

  if (delta < 0)
    printf("Não existe raiz real\n");
  else if (delta >= 0)
    printf("As raizes da equação são %.2f e %.2f\n", x1, x2);
  
  
  return 0;
}