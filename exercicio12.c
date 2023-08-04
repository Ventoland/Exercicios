#include <stdio.h>
#include <time.h>

int main(void) {

  int mp=0, mi=0, qp = 0, qi = 0, v[1000];
  
  srand(time(NULL));

  for (int i = 0; i < 1000; i++) {
    v[i] = rand() % 100;
    if (v[i] % 2 == 0){
      mp += v[i];
      qp += 1;
    } else {
      mi += v[i];
      qi += 1;
    }
  }
       
    mp = mp/qp;
    mi = mi/qi;
  
        printf("Media pares: %d\n", mp);
        printf("Media impares: %d\n", mi);
        printf("Quantidade de numeros pares: %d\n", qp);
        printf("Quantidade de numeros impares: %d\n", qi);
  
}