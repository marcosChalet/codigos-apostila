#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct curso {
   char nomeCurso[50];
   char nomeUniversidade[50];
}Curso;

typedef struct pessoa {
   int id;
   Curso* formacao;
}Pessoa;

int main () {

   Pessoa* pessoa = (Pessoa*)malloc(sizeof(Pessoa));
   if (pessoa == NULL) {
      perror("Erro ao alocar memória");
      exit(1);
   }

   pessoa->formacao = (Curso*)malloc(sizeof(Curso));
   if (pessoa->formacao == NULL) {
      perror("Erro ao alocar memória");
      exit(1);
   }



   /*
    * Como os campos de 'pessoa' são ponteiros
    * usamos as setas.
    * */

   pessoa->id = 1;
   strcpy(pessoa->formacao->nomeCurso, "Ciência da Computação");
   strcpy(pessoa->formacao->nomeUniversidade, "Universidade Federal do Cariri");

   printf("Id: %d\n", pessoa->id);
   printf("Curso: %s\n", pessoa->formacao->nomeCurso);
   printf("Universidade: %s\n", pessoa->formacao->nomeUniversidade);

   return 0;
}
