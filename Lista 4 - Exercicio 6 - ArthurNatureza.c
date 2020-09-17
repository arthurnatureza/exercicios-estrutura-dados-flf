#include <stdio.h>


float classificaImc(float peso, float altura){
    if((peso / (altura*altura)) <= 18.5){
        printf("Abaixo do peso ideial.\n");
    }else{
        if((peso / (altura*altura)) >= 18.6 && (peso / (altura*altura)) <= 24.9){
            printf("Peso ideal.\n");
        }else{
            if((peso / (altura*altura)) >= 25.0 && (peso / (altura*altura)) <= 29.9){
                printf("Levemente acima do peso ideal.\n");
            }else{
               if((peso / (altura*altura)) >= 30.0 && (peso / (altura*altura)) <= 34.9){
                 printf("Primeiro grau de obesidade.\n");
               }else{
                  if((peso / (altura*altura)) >= 35.0 && (peso / (altura*altura)) <= 39.9){
                    printf("Segundo grau de obesidade.\n");
                  }else{
                    printf("Obesidade morbida.\n");
                  }
               }
            }
        }
    }

    return (peso / (altura*altura));
}

int main(){
   float peso, altura, imc;

   do{
      printf("\nInforme o peso:");
      scanf("%f", &peso);
      printf("Informe a altura:");
      scanf("%f", &altura);

      if(peso > 0 && altura > 0){
        imc = classificaImc(peso, altura);
        printf("\nImc calculado: %.2f\n", imc);
      }else{
        printf("Dados invalidos. Peso e altura devem ser maiores que zero.\n\n");
      }

   }while(peso <= 0 || altura <= 0);


}
