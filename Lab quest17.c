#include <stdio.h>

int main() {
  int cel = 10;
  int fa;
  int resul = 0;
  float resul2 = 0;
  
  for(int i = 1; i <= 10; i++){
     resul += cel;
     resul2 = resul * 1.8 + 32;
    printf("Graus em Celcius: %d C°\n", resul);
    printf("Graus em Fahrenheit: %.2f F°\n\n", resul2);
  }
  return 0;
}