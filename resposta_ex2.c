#include <stdio.h>

int main () {

   int vet[] = {1, 2, 3, 4, 5};
   int tamVet = sizeof(vet) / sizeof(vet[0]);

   int *m = vet;
   for (int i = 0; i < tamVet; i++) {
      *m *= 5; //multiplica o conteúdo de m por 5
      m++; // vai para a próxima posição do vetor
   }

   for (int i = 0; i < tamVet; i++) {
      printf("%d, ", vet[i]);
   }
   
   return 0;
}
