#include <stdio.h>

int main() {
  int ini;
  int fim;
  int resul = 0;
  
puts("Escreva uma letra para iniciar:");
  scanf("%d", &ini);
puts("Escreva uma letra para terminar:");
  scanf("%d", &fim);

  if(ini < fim){
  for(int i = ini; i <= fim; i++){
    if(i % 2 == 0){
    resul += i;
  }
  }
  printf("resultado da soma dos números pares é: %d", resul);
  
  } else {
    for(int i = fim; i <= ini; i++){
    if(i % 2 == 0){
    resul += i;
  }
  }
  printf("resultado da soma dos números pares é: %d", resul);
  }
  return 0;
  }