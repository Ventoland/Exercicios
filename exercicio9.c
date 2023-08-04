#include <stdio.h>

int main(void) {

int x;
  printf("Digite um numero inteiro: \n");
  scanf("%d", &x);

  if(x % 4 == 0){
    printf("O numero %d é divisivel por 4.", x);
  }
  else{
    printf("Numero Invalido.");
  }
  
  return 0;
}