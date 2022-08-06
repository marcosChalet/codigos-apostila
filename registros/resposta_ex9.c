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

   // Lista de elementos
   Elemento sexto    = {1, {'A', 1}, NULL      };
   Elemento quinto   = {2, {'B', 2}, &sexto    };
   Elemento quarto   = {3, {'C', 3}, &quinto   };
   Elemento terceiro = {4, {'D', 4}, &quarto   };
   Elemento segundo  = {5, {'E', 5}, &terceiro };
   Elemento primeiro = {6, {'F', 6}, &segundo  };
   Elemento *aux;

   /* 
    * Temos elementos interligados através do ponteiro proxElemento.
    *
    * [primeiro]-> [segundo]-> [terceiro]-> [quarto]-> [quinto]-> [sexto]-> NULL 
    *
    * */

   /* apontando para o elemento que referencia
    * todos os outros
    * */
   aux = &primeiro;

   /*
    * Ao chegar em sexta aux irá apontar para o
    * sexta->proxElemento. Como o próximo elemento
    * apontado por sexta é NULL, não temos dados para
    * mostrar, logo, devemos para ao chegar neste ponto.
    * */
   while ( aux != NULL ) {

      // Mostra o elemento atual apontado por aux
      printf("-> %d, %c, %d\n", aux->id, 
                                aux->carta.naipe,
                                aux->carta.numero);

      // Anda apra o próximo elemento
      aux = aux->proxElemento;
   }

   return 0;
}
