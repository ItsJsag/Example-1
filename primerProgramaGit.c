#include <stdio.h>

main(){
  int matrizA [3] [3];
  int i=0, b=0;
  //Llenar matrizA
  for(i=0;i<3;i++){
    for(b=0;b<3;b++){
      printf("Ingrese un Numero Enter", &matrizA[i][b]);
    }
  }
//Imprimir matrizA
  for(i=0;i<3;i++){
    for(b=0;b<3;b++){
      printf("%i\t", matrizA[i][b]);
    }
    printf("\n");
  }
  //Imprimir solo numeros Mayores de 5 en la matrizA
  for(i=0;i<3;i++){
    for(b=0;b<3;b++){
      if(matrizA[i][b]>5){
      printf("%i\t", matrizA[i][b]);
      }
    }
    printf("\n");
  }
}
