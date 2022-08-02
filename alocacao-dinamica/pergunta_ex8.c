#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int main () {

   int ** vetores;

   /*
    * Procedimento
    * */

   /* Mostrando cada posição */
   for (int i = 0; i < MAX; i++) {
      for (int j = 0; j < MAX - i; j++) {
         printf("%-2d ", vetores[i][j]);
      }
      puts("");
   }

   /*

    [Saída esperada]

    0  1  2  3  4  5  6  7  8  9  
    0  1  2  3  4  5  6  7  8  
    0  1  2  3  4  5  6  7  
    0  1  2  3  4  5  6  
    0  1  2  3  4  5  
    0  1  2  3  4  
    0  1  2  3  
    0  1  2  
    0  1  
    0 

    * */

   /*
    * Procedimento
    * */

   return 0;
}
