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

   char nome[] = {"João da Silva"};
   char cpf[] = {"123.123.123.12"};
   char rg[] = {"123.123.123-1"};

   char cidade[] = {"Juazeiro do Norte"};
   char rua[] = {"Santa Isabel"};
   int numero = 12345678;

   struct identificacao identificacao;
   identificacao.nome = nome;
   identificacao.cpf = cpf;
   identificacao.rg = rg;

   Pessoa pessoa;
   pessoa.cidade = cidade;
   pessoa.rua = rua;
   pessoa.numero = numero;
   pessoa.identificacao = identificacao;


   printf("=-=-=-=-=-=-=-=-=-= Pessoa =-=-=-=-=-=-=-=-=-=\n");

   printf(" Cidade: %s\n", pessoa.cidade);
   printf(" Rua:    %s\n", pessoa.rua);
   printf(" Número: %d\n", pessoa.numero);

   printf("\n########### Identificação Pessoa ###########\n");
   printf(" Nome: %s\n", pessoa.identificacao.nome);
   printf(" CPF:  %s\n", pessoa.identificacao.cpf);
   printf(" RG:   %s\n", pessoa.identificacao.rg);

   printf("=-=-=-=-=-=-=-=-=-=-=-==-=-=-=-=-=-=-=-=-=-=-=\n");
   
   return 0;
}
