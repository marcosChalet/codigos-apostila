#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void mystrcpy (char *nome, char nomegrande[]) {

   nome = (char*)realloc(nome, strlen(nomegrande)+1);

   int i;
   for (i = 0; nomegrande[i] != '\0'; i++) {
      nome[i] = nomegrande[i];
   }
   nome[i] = '\0';
}

int main () {

   char nomePequeno[] = {"chalet"};
   char *nome = (char*)malloc(strlen(nomePequeno) + 1);
   strcpy(nome, nomePequeno);

   mystrcpy(nome, "novoNomeGrandeeeeeee");

   printf("%s\n", nome);

   return 0;
}
