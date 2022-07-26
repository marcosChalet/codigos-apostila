#include <stdio.h>
#include <stdlib.h>

typedef struct compra {
   char* produtos[3];
   double subtotal;
}Compra;

int main () {

   /* Alocação dinâmica pedida na questão */
   Compra* compra = (Compra*)malloc(sizeof(Compra));
   if (compra == NULL) {
      perror("Falha de alocação de memória!\n");
      exit(0);
   }

   /* Criando produtos que serão inseridos em 'compra' */
   char *produtos[] = {"Ipad", "Notebook", "Mouse"};
   
   /* 
    * Inserindo os produtos e o subtotal. 
    * Cuidado para não confundir o escopo do laço 'for'
    * */

   for (int i = 0; i < 3; i++)
      compra->produtos[i] = produtos[i];
   compra->subtotal = 1200.55;


   /* Mostrando o registro compra */
   for (int i = 0; i < 3; i++)
      printf("Produto %d: %s\n", i+1, compra->produtos[i]);
   printf("Subtotal = %.2f\n", compra->subtotal);

   return 0;
}
