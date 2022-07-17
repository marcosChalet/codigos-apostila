#include <stdio.h>

int main () {
   
   int a = 1;

   int *b = &a;

   for (int i = 0; i < 5; i++) {
      (*b)++;
   }

   printf("%d\n", a);

   return 0;
}
