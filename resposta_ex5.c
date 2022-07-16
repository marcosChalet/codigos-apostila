#include <stdio.h>

// Uma outra possível assinatura é
//void swap(char ** const a, char ** const b) {

void swap(char **a, char **b) {
   char *c;
   c  = *a;
   *a = *b;
   *b =  c;
}

int main () {

   /* 
    * lst é uma lista de ponteiros, e cada  ponteiro
    * aponta para um nome
    * */

   char *lst[] = {"Ana", "Carlos", "João", "Vitória", "Amanda", NULL};

   swap(&lst[1], &lst[0]);

   for (int i = 0; lst[i] != NULL; i++) {
      printf("%s\n", lst[i]);
   }

   return 0;
}

