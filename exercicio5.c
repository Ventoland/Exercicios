 #include <stdio.h>

int main(void) {

    int kw;
    float val;
    char ap;

    printf("CONTA DE LUZ \n");
    printf("Digite quantos kWh foram consumidos: \n");
    scanf("%d", &kw);
    printf("Digite S caso seja aposentado ou N caso não seja: \n");
    scanf(" %c", &ap);

    ap = toupper(ap);
  
    switch(ap){
      case 'S':
      val= (kw*0.10)-((kw*0.10)*0.15);
      printf("O valor da sua conta é: %f", val);
      break;
      case 'N':
      val= kw*0.10;
      printf("O valor da sua conta é: %f", val);
      break;
      default:
      printf("Opção digitada invalida, favor digitar uma opção valida.");
      break;
    }
  
    
  return 0;
}