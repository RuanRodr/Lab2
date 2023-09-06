#include <stdio.h>

int main() {
  float num1, num2;

  while(1){
    puts("Digite um número diferente de 0");
  scanf("%f", &num1);
  if(num1 != 0)
   break;
  else{
    continue;
  }
  }
  while(1){
     scanf("%f", &num2);
    puts("Digite um número diferente de 0");
  if(num2 != 0)
   break;
  else
    continue;
  }
  float divisao;
  divisao = num1 / num2;
  printf("A divisão entre %.f e %.f é: %.2f",num1, num2, divisao);
  return 0;
}