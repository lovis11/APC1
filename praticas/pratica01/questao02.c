/*
2. Faça um programa em C que calcule a área de um triângulo (a = base x altura / 2). Considere base e altura números inteiros m)
*/

#include <stdio.h>

int main() {
  float base;
  float altura;

  base= 2.0f;  //2.0f isso float, 2.0 isso double
  altura = 3.0f;

  float area = base * altura / 2;

   printf("A area do triangulo é %f\nwsaewa", area);

  return 0;
}