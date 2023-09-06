#include <stdio.h>

int main() {
  float num;
  float pi = 0;
  int a = 1;
  
  puts("Quantidade de termos:");
    scanf("%f", &num);
  
  for(int i = 1; i <= num; i++){
    
    if(i % 2 != 0){
   num = 4.0 / i;
    pi += a * num;
      a = -a;
      
      printf("O valor de pi é: %.2f\n", pi);
    }
  }
    return 0;
}