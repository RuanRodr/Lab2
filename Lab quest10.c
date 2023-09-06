#include <stdio.h>
#include <math.h>

int main() {
  int ini = 15;
  int fim = 90;
  int num = ini;

  while (num <= fim) {
    
    if (num % 4 == 0) { 
  int quadrado = pow(num, 2);
  printf("%d^2 = %d\n", num, quadrado);
  }
  num++;
  }
  return 0;
}