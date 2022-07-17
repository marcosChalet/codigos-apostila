#include <stdio.h>
#include <stdlib.h>

#define LINHAS 4
#define COLUNAS 4

int main () {

   int *matriz[LINHAS];

   for (int i = 0; i < LINHAS; i++) {

      // Alocando cada coluna ma matriz
      matriz[i] = (int *)malloc(sizeof(int) * COLUNAS);

      // Preenchendo cada coluna da matriz
      for (int j = 0; j < COLUNAS; j++) {

         // Irei adicionar os valores de forma progressiva
         // mas não é requisito para a resposta
         matriz[i][j] = (i * COLUNAS) + j; // Adicione qualquer valor aqui
      }
   }

   // Mostrando a matriz
   for (int i = 0; i < LINHAS; i++) {
      for (int j = 0; j < COLUNAS; j++) {
         printf("%-2d ", matriz[i][j]);
      }
      puts("");
   }

   return 0;
}
