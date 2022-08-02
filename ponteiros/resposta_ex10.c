#include <stdio.h>
#include <string.h>

void mostrar (int* idade, char* nome, char** meses) {
   printf("Idade: %d\n", *idade);
   printf("Nome: %s\n", nome);

   puts("\n=-=-=-= Meses =-=-=-=");
   for (char ** mes = meses; *mes != NULL; mes++) {
      if (**mes == 'J')
         printf("# %-17s #\n", *mes);
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
