#include <stdio.h>

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

   /*
    * Simplificando ao passar a função ao invés
    * do ponteiro para a função.
    * */
   calcular(3, 2, soma);
   calcular(3, 2, subtracao);
   calcular(3, 2, multiplicacao);

   return 0;
}
