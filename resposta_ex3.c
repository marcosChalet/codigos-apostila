#include <stdio.h>

void mult_por_5 (int *vet, size_t size) {
 for (int i = 0; i < size; i++) {
      *vet *= 5; //multiplica o conteúdo de m por 5
      vet++; // vai para a próxima posição do vetor
   }
}

int main () {

   int vet[] = {1, 2, 3, 4, 5};
   int tamVet = sizeof(vet) / sizeof(vet[0]);

   mult_por_5(vet, tamVet);

   for (int i = 0; i < tamVet; i++) {
      printf("%d, ", vet[i]);
   }
   
   return 0;
}
