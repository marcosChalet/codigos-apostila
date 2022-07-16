#include <stdio.h>

int main () {

   int vet[] = {1, 2, 3, 4, 5};
   int tamVet = sizeof(vet) / sizeof(vet[0]);


   /*
    * Procedimento
    * */


   for (int i = 0; i < tamVet; i++) {
      printf("%d, ", vet[i]);
   }
   
   return 0;
}
