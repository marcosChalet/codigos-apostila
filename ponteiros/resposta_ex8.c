#include <stdio.h>

int main () {

   char *nomesTeste[] = {"Casa", "Carro", "Rua",
                        "Aniversário", "Mão", NULL};

   char** nomes;
   char *letra;

   for (nomes = nomesTeste; *nomes != NULL; nomes++) {
      for (letra = *nomes; *letra != '\0'; letra++) {
         printf("%c", *letra);
      }
      puts("");
   }

   return 0;
}
