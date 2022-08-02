#include <stdio.h>
#include <string.h>

void mostrar (/* ... */, /* ... */, /* ... */) {
   printf("Idade: %d\n", /* ... */);
   printf("Nome: %s\n", /* ... */);

   puts("\n=-=-=-= Meses =-=-=-=");
   for (char ** mes = /* ... */; *mes != NULL; mes++) {
      printf("# %-17s #\n", /* ... */);
   }
   puts("=-=-=-=-=-=-=-=-=-=-=");
}

int main () {

   int idade = 32;
   char nome[30];
   strcpy(nome, "Changemilson");
   char *meses[] = {"Janeiro", "Junho", "Maio",
                     "Julho", "Agosto", NULL};

   mostrar(&idade, &(nome[0]), meses);

   return 0;
}
