#include <stdio.h>

int main(void) {
 int x;
  printf("Digite o codigo de origem: ");
  scanf("%d", &x);

switch(x){

  case 1:
  printf("O produto é do Sul.");

  break;
    case 2:
  printf("O produto é do Norte.");

  break;
    case 3:
  printf("O produto é do Leste.");

  break;
    case 4:
  printf("O produto é do Oeste.");

  break;
    case 5 ... 6:
  printf("O produto é do Nordeste.");

  break;
    case 7 ... 9:
  printf("O produto é do Sudeste.");

  break;
    case 10 ... 11:
  printf("O produto é do Centro-Oeste.");

  break;
    case 12 ... 15:
  printf("O produto é do Nordeste.");

  break;
  default:
  printf("O produto é importado.");
  break;
  
  
}
  
  return 0;
}