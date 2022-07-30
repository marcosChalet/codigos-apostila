#include <stdio.h>

/* 
 * a e b são os valores que serão calculados e o último
 * parametro é o ponteiro para a função que fará a operação
 * */
void calcular (int a, int b, int (*funcCalculo)()) {
   printf("Resultado: %d\n", funcCalculo(a, b));
}

int soma (const int a, const int b) {
   return a + b;
}

int subtracao (const int a, const int b) {
   return a - b;
}

int multiplicacao (const int a, const int b) {
   return a * b;
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

   ptOperacao = subtracao;
   calcular(3, 2, ptOperacao);

   ptOperacao = multiplicacao;
   calcular(3, 2, ptOperacao);

   return 0;
}
