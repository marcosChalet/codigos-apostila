#include<stdio.h>

// os naipes serão letras [A-Z]

typedef struct carta {
   char naipe;
   int numero;
}Carta;

typedef struct elemento {
   int id;
   struct carta carta;
   struct elemento *proxElemento;
}Elemento;

int main () {

   Elemento primeiro = {1, {'A', 4}, NULL};
   Elemento segundo;

   /*
    * Procedimento
    * */

   return 0;
}
