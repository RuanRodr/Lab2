#include <stdio.h>

int main() {
  int num;

  puts("Escreva um número inteiro:");
  scanf("%d", &num);
  printf("A tabuada de %d até 10 é:\n",num);
  for(int i = 0; i < 11; i++){
    int resul = num * i;
  printf("%d X %d = %d\n",num, i, resul);
  }
  
  return 0;
}