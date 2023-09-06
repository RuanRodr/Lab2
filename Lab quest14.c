#include <stdio.h>

int main() {
  int ini;
  int fim;
  
puts("Escreva uma letra para iniciar:");
  scanf("%d", &ini);
puts("Escreva uma letra para terminar:");
  scanf("%d", &fim);

  if(ini < fim){
  for(int i = ini; i <= fim; i++){
    if(i % 3 == 0){
    printf("número: %d\n", i);
  }
  }
  
  } else {
    for(int i = fim; i <= ini; i++){
    if(i % 3 == 0){
   printf("número: %d\n", i);
  }
  }
  }
  return 0;
  }