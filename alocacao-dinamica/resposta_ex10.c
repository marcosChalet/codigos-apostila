#include <stdio.h>
#include <stdlib.h>

#define QTDNOMES 5

int cmp (const void * a, const void * b) {

   /*
    * Uma forma equivalente de retorno pode ser
    * return *((char**)a)[0] - *((char**)b)[0];
    * */

   /*
    * Inverter 'a' e 'b' ara ordenar de forma decrescente
    * */

   return *(*((char**)a)) - *(*((char**)b));
}

int main () {

   // Alocando um ponteiro para um bloco de ponteiros
   char **nomes = (char**)malloc(sizeof(char*) * QTDNOMES);
   if (nomes == NULL) exit(0);

   for (int i = 0; i < QTDNOMES; i++) {
      // A locando memória
      nomes[i] = (char*)malloc(sizeof(char) * 30);
      if (nomes[i] == NULL) exit(0);

      // Inserindo nomes
      printf("Entre com o %dº nome\n-> ", i+1);
      scanf("%s", nomes[i]);
   }

   // Ordenando
   qsort(nomes, QTDNOMES, sizeof(char*), cmp);

   // Mostrando nomes ordenados
   puts("\n[Nomes ordenados]");
   for (int i = 0; i < QTDNOMES; i++) {
      printf("%s\n", nomes[i]);
   }

   // Liberando memória
   for (int i = 0; i < QTDNOMES; i++) {
      free(nomes[i]);
   }
   free(nomes);

   return 0;
}
