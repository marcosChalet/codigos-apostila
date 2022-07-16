#include <stdio.h>

void swap( /* meus parametros */ ) {
   /*
    * Procedimento
    * */
}

int main () {

   /* 
    * lst é uma lista de ponteiros, e cada  ponteiro
    * aponta para um nome
    * */

   char *lst[] = {"Ana", "Carlos", "João", "Vitória", "Amanda", NULL};

   /* swap( meus argumentos ) */

   for (int i = 0; lst[i] != NULL; i++) {
      printf("%s\n", lst[i]);
   }

   return 0;
}

