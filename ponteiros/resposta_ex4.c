#include <stdio.h>

int main () {
   
   char palavra[] = {"Uma String Qualquer"};

   // Removendo os espaços em branco
   char *ptProxLetra, *ptRes;
   ptRes = palavra;

   for (ptProxLetra = palavra; *ptProxLetra != '\0'; ptProxLetra++) {
      if (*ptProxLetra != ' ') {
         *ptRes = *ptProxLetra;
         ptRes++;
      }
   }

   // precisamos definir o fim da string já que o laço acaba antes
   *ptRes = '\0';


   // Alternando letras
   int iteracao = 0;
   for (ptRes = palavra; *ptRes != '\0'; ptRes++) {

      if ((*ptRes >= 'a' && *ptRes <= 'z') && (iteracao % 2 == 0)) {
         *ptRes = 'A' + (*ptRes - 'a');

      } else if ((*ptRes >= 'A' && *ptRes <= 'Z') && (iteracao % 2 != 0)) {
        *ptRes = 'a' + (*ptRes - 'A');
      }

      iteracao++;
   }

   // precisamos definir o fim da string já que o laço acaba antes
   *ptRes = '\0';


   printf("%s\n", palavra);

   return 0;
}
