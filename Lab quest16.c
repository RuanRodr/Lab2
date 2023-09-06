#include <stdio.h>

int main() {
  int soma3 = 0;
  int soma5 = 0;

  for(int i = 0; i <= 200; i++){
    if(i >= 0 && i <=100){
      if(i % 3 ==0){
        soma3 += i;
      }
    } else {
      if(i % 5 == 0){
        soma5 += i;
      }
    }
  }

  printf("A soma de todos os números divisíveis por 3 entre 0 e 100 é: %d\n", soma3);
  printf("A soma de todos os números divisíveis por 3 entre 100 e 200 é: %d\n", soma5);
  
  return 0;
}