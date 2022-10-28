#include<stdio.h>

int main(){
int hora, minuto, segundo, segundo_hora, segundo_minuto, total_segundos;
scanf("%d %d %d", &hora, &minuto, &segundo);

    segundo_hora = hora * 3600;
    segundo_minuto = minuto * 60;
    total_segundos = segundo_hora + segundo_minuto + segundo;

    printf("O TEMPO EM SEGUNDOS E = %d\n", total_segundos);
    return 0;
}