#include "processaResultado.h"
#include "telas.h"
#include <stdio.h>

int main() {

  double num1, num2, resultado;
  int op;

  recebeDados(&num1, &num2, &op);
  resultado = calculaResultado(num1, num2, op);
  mostraResultado(resultado);

  return 0;
}
