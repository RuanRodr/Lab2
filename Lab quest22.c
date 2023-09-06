#include <stdio.h>

int main() {
int num;
int dig;
int conta = 0;
int num2;
  
puts("Digite um número inteiro");
  scanf("%d", &num);
  num2 = num;
  
while (num > 0) {
  dig = num % 10;

  if (dig == 7) {
    conta++;
  }

num = num / 10;
}
  
  printf("A quantidade de '7' no número %d é: %d", num2, conta);
  return 0;
}