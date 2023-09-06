#include <stdio.h>

int main() {
  
  int num;
  int num2;
  int dig;
scanf("%d", &num);

 if (num < 10000 || num > 99999) {
    printf("O numero deve ter exatamente 5 digitos.\n");
    return 1;
  }
  
num2 = num;
  
  dig = num / 10000;
  int dig2 = dig;
  num = num % 10000;

  dig = num / 1000;
  int dig3 = dig;
  num = num % 1000;

  dig = num / 100;
  int dig4 = dig;
  num = num % 100;
  
  dig = num / 10; 
  int dig5 = dig;
  num = num % 10;

  int resul = (num * 10000) + (dig5 * 1000) + (dig4 * 100) + (dig3 * 10) + dig2;

  if(resul == num2){
    printf("O número %d é um palíndromo",num2);
  } else{
    printf("O número %d não é um palíndromo de %d", resul, num2);
  }
  return 0;
}