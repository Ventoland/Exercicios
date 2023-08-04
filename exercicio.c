#include <stdio.h>

int main(void) {
  int x;
  printf("Digite um numero: ");
  scanf("%d", &x);

  if(x>=20 && x<=100){
  printf("O nomero esta entre 20 e 100.");
  }
  else{
    printf("O numero esta fora do intervalo de 20 a 100.");
  }
  return 0;
}
