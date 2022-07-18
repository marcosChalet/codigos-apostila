#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAMANHO_NOME 50
#define QTD_NOMES 5

int main () {

   char **nomes = (char**)malloc(sizeof(char*) * QTD_NOMES);
   if (nomes == NULL) {
      perror("Erro ao tentar alocar o vetor de nomes\n");
      exit(1);
   }

   for (int i = 0; i < QTD_NOMES; i++) {

      /* 
       * Alocando memória para cada nome, pegando
       * do usuário e colocando no vetor de nomes
       * */

      nomes[i] = (char*)malloc(sizeof(char*) * TAMANHO_NOME);
      if (nomes[i] == NULL) {
         perror("Erro ao tentar alocar memória para o nome\n");
         exit(1);
      }

      printf("Entre com o %dº nome\n-> ", i+1);
      fgets(nomes[i], sizeof(nomes[i]), stdin);
   }

   puts("\n=-=-=-=-=-= NOMES =-=-=-=-=-=");
   for (int i = 0; i < QTD_NOMES; i++) {
      printf("%s", nomes[i]);
   }

   return 0;
}
