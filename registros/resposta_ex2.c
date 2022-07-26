#include <stdio.h>

struct identificacao {
   char *nome;
   char *cpf;
   char *rg;
};

struct pessoa {
   struct identificacao identificacao;
   char *cidade;
   char *rua;
   int numero;
};

typedef struct pessoa Pessoa;

int main () {

   /* 
    * Para fim de verificação erá adiconado um nome
    * diferente dependendo da paridade da iteração 
    * ao ser adicionado.
    * */

   char nomeImpar[] = {"João da Silva"};
   char nomePar[] = {"Maria da Silva"};

   char cpf[] = {"123.123.123.12"};
   char rg[] = {"123.123.123-1"};

   char cidade[] = {"Juazeiro do Norte"};
   char rua[] = {"Santa Isabel"};
   int numero = 12345678;

   /* Criando 5 pessoas e 5 structs de identidicação */
   struct identificacao identificacao[5];
   Pessoa pessoa[5];

   /* 
    * Atribuindo o campo alocado para identificação
    * de cada pessoa
    * */

   for (int i = 0; i < 5; i++) {
      pessoa[i].identificacao = identificacao[i];
   }


   for (int i = 0; i < 5; i++) {
      pessoa[i].cidade = cidade;
      pessoa[i].rua = rua;
      pessoa[i].numero = numero;

      /* 
       * Verificando a paridade a partir do número da
       * ordem da pessoa. Começando da primeira, por
       * isso o (i+1).
       * */

      if ((i+1) % 2 == 0)
         pessoa[i].identificacao.nome = nomePar;
      else
         pessoa[i].identificacao.nome = nomeImpar;

      pessoa[i].identificacao.cpf = cpf;
      pessoa[i].identificacao.rg = rg;
   }

   for (int i = 0; i < 5; i++) {
      printf("=-=-=-=-=-=-=-=-=-= Pessoa [%d] =-=-=-=-=-=-=-=-=-=\n", i+1);

      printf(" Cidade: %s\n", pessoa[i].cidade);
      printf(" Rua:    %s\n", pessoa[i].rua);
      printf(" Número: %d\n", pessoa[i].numero);

      printf("\n########### Identificação Pessoa ###########\n");
      printf(" Nome: %s\n", pessoa[i].identificacao.nome);
      printf(" CPF:  %s\n", pessoa[i].identificacao.cpf);
      printf(" RG:   %s\n", pessoa[i].identificacao.rg);

      printf("=-=-=-=-=-=-=-=-=-=-=-==-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n\n");
   }

   return 0;
}
