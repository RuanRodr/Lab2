#include <stdio.h>

int main() {
float produto;

  scanf("%f", &produto);
  if(produto <= 0){
    puts("Valor inválido");
    return 0;
  }
  float entrada = produto / 3;
  float presta = entrada;

  printf("A entrada do produto é: R$%.2f,00\n", entrada);
  printf("As prestações do produto é 2x de R$%.2f,00\n", presta);
  return 0;
}