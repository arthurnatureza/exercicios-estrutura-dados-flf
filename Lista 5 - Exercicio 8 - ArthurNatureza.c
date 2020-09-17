#include <stdio.h>

int main(){
    float nota[5], maiorNota, menorNota, media, somaNotas = 0;

    printf("\nInforme as notas:\n\n");
    for(int i=0; i<5; i++){
        do{
            printf("Nota do jurado %d: ", i+1);
            scanf("%f", &nota[i]);
            if(i==0){
                maiorNota = menorNota = nota[i];
            }
            if(nota[i] < 0 || nota[i] > 10){
                printf("Nota informada fora do padrao, informe a nota, de 0 a 10, do jurado %d novamente\n\n", i+1);
            }
        }while(nota[i] < 0 || nota[i] > 10);
    }
    for(int i=0; i<5; i++){
        if(nota[i] > maiorNota){
            maiorNota = nota[i];
        }
        if(nota[i] < menorNota){
            menorNota = nota[i];
        }
        somaNotas += nota[i];
    }
    printf("Maior nota: %.2f\n", maiorNota);
    printf("Menor nota: %.2f\n", menorNota);
    printf("Nota: %.2f", ((somaNotas - (maiorNota + menorNota))/3));
}
