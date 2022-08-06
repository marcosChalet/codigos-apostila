#include<stdio.h>

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

   // Elemento xxxx = {id, {naipe, numero}, proxElemento}
   Elemento sexto    = {1, {'A', 1}, NULL      };
   Elemento quinto   = {2, {'B', 2}, &sexto    };
   Elemento quarto   = {3, {'C', 3}, &quinto   };
   Elemento terceiro = {4, {'D', 4}, &quarto   };
   Elemento segundo  = {5, {'E', 5}, &terceiro };
   Elemento primeiro = {6, {'F', 6}, &segundo  };
   Elemento *aux;

   /* 
    * Temos elemetos interligados através do ponteiro proxElemento.
    *
    * [primeiro]-> [segundo]-> [terceiro]-> [quarto]-> [quinto]-> [sexto]-> NULL 
    *
    * */

   /* atribuição de aux */
   while ( /* condicional de aux */ ) {
      /* print dos dados */
      /* andar com o ponteiro aux */
   }

   return 0;
}
