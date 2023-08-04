#include <stdio.h>

int main(void) {

int x;
float val,tot;
  printf("Digite quantos kWh foram consumidos: \n");
  scanf("%d", &x);
  if(x<=50){
    val=1.00;
    tot = x*val;
  }
  if(x>=51 && x<=100){
    val=1.30;
    tot = 50*1.00 + ((x-50)*val);
  }
  if(x>=101 && x<=150){
    val=1.60;
    tot =50*1.00+50*1.30+((x-100)*val);
  }
  if(x>150){
    val=2.00;
    tot =50*1.00+50*1.30+49*1.60+((x-150)*val);
  }
  printf("O valor de sua conta é: %f", tot);
  return 0;
}