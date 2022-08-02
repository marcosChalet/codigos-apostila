#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define TAM 10

int alocador (/* parâmetro 1 */, size_t size) {
   /* 
    * Procedimento
    * */
}

int main () {

   int *vetInt;

   /*
    * Procedimento
    * */

   for (int i = 0; i < TAM; i++) 
      vetInt[i] = i;

   for (int i = 0; i < TAM; i++)
      printf("%d, ", vetInt[i]);

   return 0;
}
