#include <stdio.h>

void calcular (int a, int b, int (*funcCalculo)()) {
   printf("Resultado: %d\n", funcCalculo(a, b));
}

int soma (const int a, const int b) {
   return a + b;
}

int main () {

   /* Ponteiro que aponta para uma função */
   int (*ptOperacao)();

   /* Atribuindo uma função ao ponteiro */
   ptOperacao = soma;

   /* 
    * Passando os valores que sofrerão uma
    * operação matemática, e a função que
    * fará a operação
    * */
   calcular(3, 2, ptOperacao);

   /*
    * Procedimento
    * */

   return 0;
}
