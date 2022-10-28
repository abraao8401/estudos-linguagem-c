#include<stdio.h>
#include<math.h>

int main(){
double massaTonelada, aceleracao, tempoGasto;
double massaKilo;
double velocidadeAtingida, comprimentoPista, trabalhoRealizado;

scanf("%lf %lf %lf", &massaTonelada, &aceleracao, &tempoGasto);

massaKilo = massaTonelada * 1000;

    velocidadeAtingida = aceleracao * tempoGasto;
    double velocidadems = velocidadeAtingida;
    velocidadeAtingida = velocidadeAtingida * 3.6;

    comprimentoPista = (aceleracao * pow(tempoGasto,2))/2;

    trabalhoRealizado = (massaKilo * pow(velocidadems,2))/2;

   printf("VELOCIDADE = %.2lf\n", velocidadeAtingida);
   printf("ESPACO PERCORRIDO = %.2lf\n", comprimentoPista);
   printf("TRABALHO REALIZADO = %.2lf\n", trabalhoRealizado);


    return 0;
}