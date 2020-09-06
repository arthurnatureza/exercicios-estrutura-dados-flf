#include <stdio.h>
#include <stdlib.h>

/*12. Escreva um programa em C que leia uma quantidade não determinada de
 *números positivos e calcula e escreve a quantidade de números pares e
 *ímpares, a média aritmética dos valores pares informados, a média de todos os
 *valores lidos. O programa em C deve ler um número até que seja informado o
 *número zero.
*/

int main(){
    int num;
    int qtdNum = 0;
    int qtdPar = 0;
    float somaPar = 0;
    int qtdImpar = 0;
    float somaTotal = 0;
    float mediaTotal = 0;
    float mediaPar = 0;

    do{
        printf("Informe um numero positivo ou digite 0(Zero) para ver os resultados: ");
        scanf("%d", &num);
        if(num > 0){
            somaTotal += num;
            qtdNum += 1;
            if(num%2 == 0){
                qtdPar += 1;
                somaPar += num;

            }else{
                qtdImpar +=1;

            }
        }else{
            if(num < 0){
                printf("Informe apenas numeros positivos.");
            }
        }
        system("cls");
    } while(num != 0);

    mediaPar = somaPar/qtdPar;
    mediaTotal = somaTotal/qtdNum;

    printf("Quantidade de numeros pares informados: %d\n", qtdPar);
    printf("Quantidade de numeros impares informados: %d\n", qtdImpar);
    printf("Media aritmetica dos numeros pares: %.2f\n", mediaPar);
    printf("Media aritmetica total dos numeros informados: %.2f\n", mediaTotal);

}
