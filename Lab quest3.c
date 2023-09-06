#include <stdio.h>

int main() {
int F; 
int fatorial = 1;
  
  puts("Escreva um número para ser fatorado");
  scanf("%d", &F);

  if(F < 0){
    
    puts("O número não pode ser negativo");
    return 0;
    
  } else {
    
  for (int i = 1; i <= F; i++) {
    fatorial *= i;
  }
  }
  printf("o fatoral do número deu: %d\n", fatorial);
  return 0;
}