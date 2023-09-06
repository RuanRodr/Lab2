#include <stdio.h>

int main() {
  int a = 10;
  int b, c;

  printf("Valor inicial de a: %d\n", a);
  
  b = --a;
  c = a--;

  printf("pré-incremento: %d\n", b);
  printf("Pós-incremento: %d\n", c);
  printf("valor final de a: %d", a);
  return 0;
}