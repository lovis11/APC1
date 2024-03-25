#include <stdio.h>
#include <math.h>

 int main() {
   int numero1;
   int numero2;
   const double PI = 3.14;

   printf("Entre com o valor do do numero 1: ");
    int deu_certo = scanf("%i", &numero1);

   printf("Entre com o valor do numero 2: ");
     deu_certo = scanf("%i", &numero2);

   int resultado = numero1 + numero2;
   printf("A soma dos numeros eh %i\n", resultado);

   resultado = numero1 - numero2;

     printf("A subtracao dos numeros eh %i\n", resultado);

   resultado = numero1 * numero2;

     printf("a multiplicacao dos numeros eh %i\n", resultado);

   float resultado2 = numero1 / (numero2 * 1.0);

     printf("a divisao dos numeros eh %.1f\n", resultado2);

   resultado = numero1 % numero2;
   printf("O resto da divisão dos numeros é %i\n", resultado);

   // numero' = numero1 + 1;
   // numero1++;
   // ++numero1;

   printf("O incremento do numero1 eh %i\n", numero1++);
   printf("O incremento do numero1 eh %i\n", ++numero1);

   // numero1 = numero1 - 1;
   // numero1--;
   // --numero1;

   printf("O decremento do numero1 eh %i\n", numero1--);
   printf("O decremento do numero1 eh %i\n", --numero1);

   double raiz = sqrt(numero1); //raiz quadrada do numero
   printf("A raiz quadrada do numero1 eh %.2f\n", raiz);
   
   double potencia = pow(numero1, 3); //potencia do numero
   printf("A 3a potencia do numero1 eh %.2f\n", potencia);
   
   double seno = sin(numero1 * PI);  //seno do numero
   printf("O seno do numero1 eh %.2f\n", seno);
   
   double cosseno = cos(numero1 * PI); //cosseno do numero
   printf("O cosseno do numero1 eh %.2f\n", cosseno);
   
   double tangente = tan(numero1 * PI); //tangem do numero
   printf("A tangente do numero1 eh %.2f\n", tangente);
   
   double logaritmo = log2(numero1); //log em base 2
   printf("O logaritmo do numero1 na base 2 eh %.2f\n", logaritmo);
   
   double logaritmo10 = log10(numero1); //log base 10
   printf("O logaritmo do numero1 na base 10 eh %.2f\n", logaritmo10);

   return 0;
 }