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

   segundo.id = 2;
   segundo.carta.naipe = 'C';
   segundo.carta.numero = 5;

   primeiro.proxElemento = &segundo;

   printf("%d, %c, %d\n", primeiro.id, primeiro.carta.naipe, primeiro.carta.numero);

   printf("%d, %c, %d\n", primeiro.proxElemento->id,
                          primeiro.proxElemento->carta.naipe,
                          primeiro.proxElemento->carta.numero);

   return 0;
}
