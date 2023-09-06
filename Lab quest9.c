#include <stdio.h>

int main() {
  int n = 20;
  int p = 1, s = 1, pro;

  printf("%d\n",p);
  printf("%d\n",s);
  
for (int i = 3; i <= n; i++) {
  pro = p + s;
    printf("%d\n", pro);
  
  p = s;
  s = pro;
}
  return 0;
}