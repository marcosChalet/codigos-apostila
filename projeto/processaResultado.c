// processaResultado.c
#include "processaResultado.h"
#include "operacoes.h"

double calculaResultado(const double n1, const double n2, const int op) {
  if (op == 1)
    return somar(n1, n2);
  else if (op == 2)
    return subtrair(n1, n2);
  else if (op == 3)
    return multiplicar(n1, n2);
  else if (op == 4)
    return dividir(n1, n2);
  return 0;
}
