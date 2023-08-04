#include <stdio.h>

int main(void) {

  int x;

  printf("Digite um numero: \n");
  scanf("%d", &x);

  if(x>0){
    printf("O numero %d é positivo.", x);
  }
  else if (x<0){
    printf("O numero %d é negativo.", x);
  }
  else if (x==0){
    printf("O numero %d é nulo.", x);
  }
  return 0;
}