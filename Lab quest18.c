#include <stdio.h>
#include <math.h>

int main() {
  int grao = 1;
  unsigned long int resul1 = 0;
  unsigned long int resul2 = 0;
  
  for(int i = 1; i <= 64; i++){  
   
  resul1 = pow(2, grao - 1);
    resul2 += resul1;
     grao++;
  }
  printf("A quantidade de grãos que se pode ter em um tabuleiro é: %lu grãos.\n", resul2);
  return 0;
}