#include <stdio.h>

int main() {
int resul = 1;
  for(int i = 1; i <= 10; i++){
    
    resul *= i;
    
    if(i % 2 != 0)
       printf("O fatorial de %d é :%d\n", i, resul);
    
  }
  return 0;
}