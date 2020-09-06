#include <stdio.h>

/*9. Faça um programa em C que leia a idade de uma pessoa expressa em anos,
 *meses e dias e mostre-a, expressa apenas em dias. Considere que o ano tem
 *365 dias e que o mês tem 30 dias.
*/

int main(){
    int anoAtual = 2020;
    int anoNasc;
    int mesNasc;
    int diaNasc;
    int id;
    int diasNasc;
    printf("Informe o dia em que voce nasceu: ");
    scanf("%d", &diaNasc);
    printf("Informe o mes em que voce nasceu: ");
    scanf("%d", &mesNasc);
    printf("Informe o ano em que voce nasceu: ");
    scanf("%d", &anoNasc);

    if(mesNasc == 1){
            id = anoAtual - anoNasc;
            diasNasc = (id * 365) + diaNasc;
            printf("Voce tem %d dias de idade.", diasNasc);

    } else{
           id = anoAtual - anoNasc;
           diasNasc = (id * 365) + diaNasc + ((mesNasc - 1) * 30);
           printf("Voce tem %d dias de idade.", diasNasc);
    }

}
