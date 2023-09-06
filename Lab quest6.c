#include <stdio.h>

int main() {
int voto;
int paulo = 0;
int renata = 0;
int nulo = 0;
int branco = 0;
int total = 0;
  
float porcPaulo;
float porcRenata;
float porcBranco;
float porcNulo;

puts("5 para Paulo, 7 para Renata ou 0 para brannco");
puts("Qualquer número < 0, fechará a urna");
  
while(1){
  puts("Digite seu voto");
  scanf("%d", &voto);

  if(voto < 0){
    break;
  }
  
  int conf;
  printf("Deseja confirmar seu voto '%d'?  (1)Sim    (2)Não", voto);
  scanf("%d", &conf);

  if(conf != 1){
    printf("Voto cancelado \n");
    continue;
  }
  
  if (voto == 5){
    paulo++;
  }else if (voto == 7){
    renata++;
  }else if (voto == 0){
    branco++;
  } else {
    nulo++; 
  }
  total++;
}
porcPaulo = (float)paulo / total * 100;
porcRenata = (float)renata / total * 100;
porcBranco = (float)branco / total * 100;
porcNulo = (float)nulo / total * 100;
  
  printf("Total de votos: %d\n", total);
  printf("Porcentagem de votos de Paulo: %.2f%%\n", porcPaulo);
  printf("Porcentagem de vots de Renata: %.2f%%\n", porcRenata);
  printf("Porcentagem de votos em branco: %.2f%%\n", porcBranco);
  printf("Porcentagem de votos nulos: %.2f%%\n", porcNulo);

if(paulo > renata)
  puts("Paulo é o novo presidente");
  else if(renata > paulo)
    puts("Renata é a nova presidenta");
  else
    puts("Empate");
return 0;
}