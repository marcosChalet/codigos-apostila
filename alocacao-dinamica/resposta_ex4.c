#include <stdio.h>
#include <stdlib.h>

#define LINHAS 4
#define COLUNAS 4

int main () {

   int **matriz = (int**)malloc(sizeof(int*) * LINHAS);

   for (int i = 0; i < LINHAS; i++) {

      matriz[i] = (int *)malloc(sizeof(int) * COLUNAS);

      for (int j = 0; j < COLUNAS; j++) {
         matriz[i][j] = (i * COLUNAS) + j;
      }
   }

   for (int i = 0; i < LINHAS; i++) {
      free(matriz[i]);
   }
   free(matriz);

   return 0;
}
