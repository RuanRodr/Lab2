#include <stdio.h>

int main() {
  int num;
  int maior = 0;
  int menor = 0;
  int valor = 0;
  
  while(1){
    
    scanf("%d", &num);
    
  if(num < 0 || num % 2 == 0){
    break;
  } 

    if(num > maior || menor == 0){
      maior = num;
    }
    if(num < menor || menor == 0){
      menor = num;
    }
  }
 valor = menor * maior;
  printf("\n%d * %d = %d", menor, maior, valor);
  return 0;
}