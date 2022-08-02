#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int main () {

   int ** vetores;

   vetores = (int**) malloc(sizeof(int*) * MAX);
   if (vetores == NULL) exit(0);

   /* preenche posições */
   for (int i = MAX; i >= 0; i--) {
      vetores[MAX - i] = malloc(sizeof(int) * i);
      if (vetores[MAX - i] == NULL) exit(0);

      for (int j = 0; j < i; j++) {
         vetores[MAX - i][j] = j;
      }
   }

   /* Mostrando cada posição */
   for (int i = 0; i < MAX; i++) {
      for (int j = 0; j < MAX - i; j++) {
         printf("%-2d ", vetores[i][j]);
      }
      puts("");
   }

   /* libera memória */
   for (int i = 0; i < MAX; i++) {
      free(vetores[i]);
   }
   free(vetores);

   return 0;
}
