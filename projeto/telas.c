#include "telas.h"

void recebeDados(double *n1, double *n2, int *op) {
  printf("Primeiro valor\n-> ");
  scanf("%lf", n1);
  printf("Segundo valor\n-> ");
  scanf("%lf", n2);
  printf(
      "Operação:\n[1] somar\n[2] subtrair\n[3] multiplicar\n[4] dividir\n-> ");
  scanf("%d", op);
}

void mostraResultado(const double resultado) {
  printf("O resultado é: %lf\n", resultado);
}
