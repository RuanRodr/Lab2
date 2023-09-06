#include <stdio.h>

int main() {
  int n;
  int maior, menor;
  int pri = 1;

  puts("Digite um valor. ('0' fecha o programa)\n");
    scanf("%d", &n);
  
  maior = menor = n;
  
  while(n != 0){
    
  if(n > maior) {
    maior = n;
  }
  if(n < menor) {
    menor = n;
  }
    
  printf("Digite outro valor. (ou '0' para sair)\n");
    scanf("%d", &n);
  }

  printf("O maior é: %d\n", maior);
  printf("O menor é: %d\n", menor);
  return 0;
}