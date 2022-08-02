#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define TAM 10

int alocador (int **p, size_t size) {

   *p = malloc(size);
   if (*p == NULL) {
      return false;
   }
   return true;
}

int main () {

   int *vetInt;

   if ( !alocador(&vetInt, TAM * sizeof(*vetInt)) ) {
      exit(1);
   }

   for (int i = 0; i < TAM; i++) 
      vetInt[i] = i;

   for (int i = 0; i < TAM; i++)
      printf("%d, ", vetInt[i]);

   return 0;
}
