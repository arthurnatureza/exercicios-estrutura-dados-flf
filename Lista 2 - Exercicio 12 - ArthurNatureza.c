#include <stdio.h>

/*12.Escreva um programa em C que leia três números e, em seguida, mostra os
 *três números informados em ordem crescente.
*/

int main (){
    int n1;
    int n2;
    int n3;

    printf("Informe o primeiro numero: ");
    scanf("%d", &n1);
    printf("Informe o segundo numero: ");
    scanf("%d", &n2);
    printf("Informe o terceiro numero: ");
    scanf("%d", &n3);

    /*if((n1 < n2) && (n1 < n3) && (n2 < n3)){
        printf("%d, %d, %d", n1 , n2, n3);
    }
    if((n2 < n1) && (n2 < n3) && (n1 < n3)){
        printf("%d, %d, %d", n2 , n1, n3);
    }
    if((n3 < n1) && (n3 < n2) && (n1 < n2)){
        printf("%d, %d, %d", n3 , n1, n2);
    }*/

    if ((n1 < n2) && (n1 < n3)){
        printf("%d, ", n1);
        if(n2 < n3){
            printf("%d, %d", n2, n3);
        }else{
            printf("%d, %d", n3, n2);
        }
    }
    if ((n2 < n1) && (n2 < n3)){
        printf("%d, ", n2);
        if(n1 < n3){
            printf("%d, %d", n1, n3);
        }else{
            printf("%d, %d", n3, n1);
        }
    }
    if ((n3 < n1) && (n3 < n2)){
        printf("%d, ", n3);
        if(n1 < n2){
            printf("%d, %d", n1, n2);
        }else{
            printf("%d, %d", n2, n1);
        }
    }


}
