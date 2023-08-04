#include <stdio.h>

int main(void) {
  float sal, r1, r2, r3;
  r1=0.15;
  r2=0.10;
  r3=0.05;

  printf("Digite seu salario: ");
  scanf("%f", &sal);

  if(sal<500){
    printf("Salario: %f\n", sal);
    printf("Reajuste: %f\n", sal*r1);
    printf("Salario com reajuste: %f\n", sal+(sal*r1));
  }
  if(sal>=500 && sal<=1000){
    printf("Salario: %f\n", sal);
    printf("Reajuste: %f\n", sal*r2);
    printf("Salario com reajuste: %f\n", sal+(sal*r2));
  }
  if(sal>1000){
    printf("Salario: %f\n", sal);
    printf("Reajuste: %f\n", sal*r3);
    printf("Salario com reajuste: %f\n", sal+(sal*r3));
  }
  return 0;
}
