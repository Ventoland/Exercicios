#include <stdio.h>

int main(void) {
  char sexo;
    printf("Digite seu Sexo: \n M - Maculino \n F - Feminino \n");
    scanf("%c", &sexo);

      switch(sexo){
        case 'M':
        printf("Sexo: Masculino.");
        break;
        case 'F':
        printf("Sexo: Feminino.");
        break;
        default:
        printf("Opção Invalida.");
        break;
      }
  return 0;
}