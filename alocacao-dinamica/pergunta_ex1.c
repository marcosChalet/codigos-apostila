#include <stdio.h>
#include <stdlib.h>

#define LINHAS 4
#define COLUNAS 4

int main () {

   int *matriz[LINHAS];

   /*
    * Procedimento
    * */

   // Mostrando a matriz
   for (int i = 0; i < LINHAS; i++) {
      for (int j = 0; j < COLUNAS; j++) {
         printf("%-2d ", matriz[i][j]);
      }
      puts("");
   }

   return 0;
}
