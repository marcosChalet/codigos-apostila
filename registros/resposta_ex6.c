#include <stdio.h>

typedef struct pessoa {
   int idade;
   char *nome;
}Pessoa;

int main () {

   Pessoa pessoa1 = {18, "José"};
   Pessoa pessoa2 = {20, "Maria"};

   Pessoa *p1, *p2, *p3;
   p1 = &pessoa1;
   p2 = &pessoa2;

   /* Antes */
   printf("pessoa1: {%d, %s}\n", p1->idade, p1->nome);
   printf("pessoa2: {%d, %s}\n", p2->idade, p2->nome);


   p3 = p2;
   p2 = p1;
   p1 = p3;

   /* Depois */
   puts("");
   printf("pessoa1: {%d, %s}\n", p1->idade, p1->nome);
   printf("pessoa2: {%d, %s}\n", p2->idade, p2->nome);

   return 0;
}
