#include <stdio.h>

int main(void) {
  float a,b,c,m;

    printf("Digite 3 valores: ");
    scanf("%f %f %f", &a, &b, &c);

    m=(a+b+c)/3;

  if(m>a){ 
    printf("A media dos numeros é maior que o primeiro numero. \n");
    printf("Media: %f\n", m); 
    printf("Numero 1: %f\n", a);
    printf("Numero 2: %f\n", b);
    printf("Numero 3: %f", c);
  }
  if(m>b){
    printf("A media dos numeros é maior que o segundo numero.\n");
    printf("Media: %f\n", m); 
    printf("Numero 1: %f\n", a);
    printf("Numero 2: %f\n", b);
    printf("Numero 3: %f", c);
  }
  if(m>c){
    printf("A media dos numeros é maior que o terceiro numero.\n");
    printf("Media: %f\n", m); 
    printf("Numero 1: %f\n", a);
    printf("Numero 2: %f\n", b);
    printf("Numero 3: %f", c);
  }
  if(m>a && m>b || m>b && m>c || m>a && m>c){
    printf("A media dos numeros é maior que dois numeros apresentados.\n");
    printf("Media: %f\n", m); 
    printf("Numero 1: %f\n", a);
    printf("Numero 2: %f\n", b);
    printf("Numero 3: %f", c);
  }
  if(m>a && m>b && m>c){
    printf("A media dos numeros é maior que todos os numeros apresentados.\n");
    printf("Media: %f\n", m); 
    printf("Numero 1: %f\n", a);
    printf("Numero 2: %f\n", b);
    printf("Numero 3: %f", c);
  }
  if(m<a && m<b && m<c){
    printf("A media dos numeros é menor que todos os numeros.\n");
    printf("Media: %f\n", m); 
    printf("Numero 1: %f\n", a);
    printf("Numero 2: %f\n", b);
    printf("Numero 3: %f", c);
  }
  
  return 0;
}