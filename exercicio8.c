#include <stdio.h>

int main(void) {

  int a,b,c;

  printf("Digite 3 lados para verificar qual o tipo do triangulo.\n");
  printf("Digite o primeiro lado: \n");
  scanf("%d", &a);
  printf("Digite o segundo lado: \n");
  scanf("%d", &b);
  printf("Digite o terceiro lado: \n");
  scanf("%d", &c);

  if(a<b+c &&  b<a+c && c<a+b){

    if(a != b && b != c && c != a){
   printf("Triangulo Escaleno.");
    }
    else if(a==b && b==c){
      printf("Triangulo Equilatero.");
    }
    else if(a==b!=c || a==c!=b || b==c!=a){
      printf("Triangulo Isosceles");
    }
  }
  else{
    printf("Não é um triangulo.");
  }
  
  return 0;
}