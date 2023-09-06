#include <stdio.h>
#include <math.h>

int main() {
  int ini;
  int fim;
  int num;
  puts("Escreva o valor de início;");
    scanf("%d", &ini);
  puts("Escreva o valor de fim");
    scanf("%d", &fim);
  
  if(ini < fim){
  num = ini;
  
  while (num <= fim) { 
    if (num % 4 == 0) { 
  int quadrado = pow(num, 2);
  printf("%d^2 = %d\n", num, quadrado);
  }
  num++;
  }
  } else {
     num = fim;
    
    while (num <= ini) {
    if (num % 4 == 0) { 
  int quadrado = pow(num, 2);
  printf("%d^2 = %d\n", num, quadrado);
  }
  num++;
  }
  }
  return 0;
}