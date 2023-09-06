#include <stdio.h>
#include <math.h>

int main() {
int cateto1 = 1;
int cateto2 = 1; 
int hipotenusa = 0;
  for(int i = 1; i <= 500; i++){
    hipotenusa = sqrt(pow(cateto1, 2) + pow(cateto2, 2));
    cateto1++;
    cateto2++;
    printf("%d\n", hipotenusa);
  }
  return 0;
}