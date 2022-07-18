#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void mystrcpy (/* Parâmetros */) {

   /*
    * Procedimento
    * */

}

int main () {

   char nomePequeno[] = {"chalet"};
   char *nome = (char*)malloc(strlen(nomePequeno) + 1);
   strcpy(nome, nomePequeno);

   mystrcpy(nome, "novoNomeGrandeeeeeee");

   printf("%s\n", nome);

   return 0;
}
