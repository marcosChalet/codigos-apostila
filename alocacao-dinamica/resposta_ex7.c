#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define QTDNOMES 3

int main () {

   char **nomes = (char**)malloc(sizeof(char*)*QTDNOMES);
   if (nomes == NULL) exit(1);

   for (int i = 0; i < QTDNOMES; i++) {
      nomes[i] = (char*)malloc(strlen("chalet"));
      if (nomes[i] == NULL) exit(0);

      strcpy(nomes[i], "chalet");
   }

   for (int i = 0; i < QTDNOMES; i++) {
      free(nomes[i]);
   }
   free(nomes);

   return 0;
}
