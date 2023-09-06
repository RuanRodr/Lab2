#include <stdio.h>

int main() {
  int Jose = 150;
  int Pedro = 110;
  int contador = 1;
  while(1){
    Jose = Jose + 2;
    Pedro = Pedro + 3;
    contador = contador + 1;
    if(Pedro > Jose){
      printf("Em %d anos, Pedro será maior que Jose\n", contador);
      printf("Pedro terá %dcm e José terá %dcm\n", Pedro, Jose);
      break;
    }
  }
  return 0;
}