#include <stdio.h>

int main() {
  for(int i = 1; i <= 256; i++){
    printf("hexa: %X       Octal: %o       Binário; %09b\n", i, i, i);
  }
  return 0;
}