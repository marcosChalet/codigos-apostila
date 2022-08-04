#include <stdio.h>
#include <stdlib.h>

#define MAXVALORES 5

typedef struct node {
   int val;
   char *nomeVal;
}Node;

int cmp (const void * a, const void * b) {
   return ((Node*)a)->val - ((Node*)b)->val;
}

int main () {

   char *arr[] = {"Três", "Quatro", "Dois", "Um", "Cinco", NULL};
   int vet[] = {3,4,2,1,5};

   /* 
    * Vetor de structs contendo os valores de 
    * arr[i] e vet[i] em cada posição 
    * */
   Node elementos[MAXVALORES] = {
      {vet[0], arr[0]}, {vet[1], arr[1]},
      {vet[2], arr[2]}, {vet[3], arr[3]},
      {vet[4], arr[4]}
   };


   /* Ordenando os elementos */
   qsort(elementos, 5, sizeof(Node), cmp);
  
   /* Mostra os elementos ordenados */
   for (int i = 0; i < MAXVALORES; i++) {
      printf("%d, %s\n", elementos[i].val, elementos[i].nomeVal);
   }
  
   return 0;
}

/*
 * Saída esperada
 * 1, Um
 * 2, Dois
 * 3, Três
 * 4, Quatro
 * 5, Cinco
 * */
