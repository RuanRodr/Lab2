#include <stdio.h>

int main() {

  int num;
  int num2;
  do{
    
  puts("Digite um número de 1 até 7.");
  scanf("%d", &num);
    
  if (num < 1 || num > 7)
    puts("Número de dia não válido");
  else if (num == 1)
    puts("Hoje é domingo");
  else if (num == 2)
    puts("Hoje é segunda-feira");
  else if (num == 3)
    puts("Hoje é terça-feira");
  else if (num == 4)
    puts("Hoje é quarta-feira");
  else if (num == 5)
    puts("Hoje é quinta-feira");
  else if (num == 6)
    puts("Hoje é sexta-feira");
  else if (num == 7)
    puts("Hoje é sábado");
    
  puts("Deseja continuar? (Qualquer tecla)Sim  (0)Não");
  scanf("%d", &num2);
    
    }while(num2 != 0);
  
  return 0;
}