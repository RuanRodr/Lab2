#include <stdio.h>

int main() {
  int ini;
  int fim;
  float resul;
  float resul2;

  puts("Escreva o inicio da faixa:");
  scanf("%d", &ini);
  puts("Escreva o fim da faixa:");
  scanf("%d", &fim);
  
  if(ini < fim){
   int divi = fim - ini; 
    for (int i = ini; ini <= fim; i++){
      resul += ini;
      ini++;
    }
    resul2 = resul / divi;
    printf("A média aritimética é: %.2f", resul2);
    
  } else{
     int divi = ini - fim; 
    for (int i = fim; fim <= ini; i++){
      resul += fim;
      fim++;
    }
    resul2 = resul / divi;
    printf("A média aritimética é: %.2f", resul2); 
  }
  return 0;
}