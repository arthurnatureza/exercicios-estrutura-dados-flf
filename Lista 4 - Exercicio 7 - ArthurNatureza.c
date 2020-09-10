#include <stdio.h>
#include <stdlib.h>

int segundos (int h, int m, int s){
    int tempoSeg = 0;
    tempoSeg = (h * 3600) + (m * 60) + s;
    return tempoSeg;
}

int main(){
    int hora;
    int minuto;
    int segundo;
    int resp;

    printf("Informe a hora: ");
    scanf("%d", &hora);
    printf("Informe os minutos: ");
    scanf("%d", &minuto);
    printf("Informe os segundos: ");
    scanf("%d", &segundo);

    resp = segundos(hora, minuto, segundo);

    printf("%d hora(s), %d minuto(s), %d segundo(s) equivale a %d segundos", hora, minuto, segundo, resp);

}
