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

typedef struct descritor {
   Elemento *inicio;
   Elemento *fim;
   int qtd;
}Descritor;

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
    * O ponteiro início do nó descritor será a variável
    * 'primeiro', o fim será a variável 'sexto' e a
    * quantidade de elementos dentro da lista será 6
    * */
   Descritor descritor = {&primeiro, &sexto, 6};

   /* 
    * Temos elementos interligados através do ponteiro proxElemento.
    *
    * [primeiro]-> [segundo]-> [terceiro]-> [quarto]-> [quinto]-> [sexto]-> NULL 
    *     /\                                                        /\
    *     |                                                         |
    * elemento->inicio                                         elemento->fim
    *
    * */

   /* 
    * apontando para o início da lista
    * */
   aux = descritor.inicio;

   int contador = 0;
   while ( descritor.qtd > contador++ ) {

      // Mostra o elemento atual apontado por aux
      printf("-> %d, %c, %d\n", aux->id, 
                                aux->carta.naipe,
                                aux->carta.numero);

      // Anda para o próximo elemento
      aux = aux->proxElemento;
   }

   return 0;
}
