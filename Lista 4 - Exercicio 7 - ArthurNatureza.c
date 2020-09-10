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


/*#include <stdio.h>

int segundos(int hr, int min, int sg){
    return (hr*3600 + min*60 + sg);
}
int main(){
   int hr, min, sg;
   printf("Informe uma hora (hora:min:seg): ");
   scanf("%d:%d:%d", &hr, &min, &sg);
   printf("A hora em segundos é = %d",  segundos(hr,min,sg));
}*/

/*#include <stdio.h>

int calculateSeconds(int hours, int minutes, int seconds) {
    int totalSeconds = (hours * 3600) + (minutes * 60) + seconds;

    return totalSeconds;
}


void main() {
    int hours=0, minutes=0, seconds=0;

    printf("Informe horas, minutos e segundos: ");
    scanf("%d %d %d", &hours, &minutes, &seconds);
    printf("Essa hora vale %d segundos.\n", calculateSeconds(hours, minutes, seconds));
}*/
