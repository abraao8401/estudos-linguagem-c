#include <stdio.h>

int main(){
double valorIngresso, valorInicial, valorFinal,lucroObtido, maiorLucro= -999999, melhorValor, i;
int quantVendida, numIngressos;
scanf("%lf %lf %lf", &valorIngresso, &valorInicial, &valorFinal);

    if(valorInicial>= valorFinal){
        printf("INTERVALO INVALIDO.\n");
    }else{
        for(i=valorInicial; i<=valorFinal; i++){
            if(i<=valorIngresso){
            quantVendida = ((valorIngresso - i) * 50) + 120.0;
            lucroObtido = (i * quantVendida) - 200 - (0.05*quantVendida);
            printf("V: %.2lf, N: %d, L: %.2lf\n", i, quantVendida, lucroObtido);
              if(lucroObtido>maiorLucro){
                    maiorLucro = lucroObtido;
                     melhorValor = i;
                     numIngressos = quantVendida;
                } 
        }else{
       
            quantVendida = 120 - (i-valorIngresso)*60;
            lucroObtido = (i * quantVendida) - 200 - (0.05*quantVendida);
            printf("V: %.2lf, N: %d, L: %.2lf\n", i, quantVendida, lucroObtido);
              if(lucroObtido>maiorLucro){
                    maiorLucro = lucroObtido;
                     melhorValor = i;
                     numIngressos = quantVendida;
                }
          }
                
     }
      if(maiorLucro<0){
            maiorLucro = 0;
            melhorValor = 0;
            numIngressos = 0;
           } 
     printf("Melhor valor final: %.2lf\n", melhorValor);
     printf("Lucro: %.2lf\n", maiorLucro);
     printf("Numero de ingressos: %d\n", numIngressos);
 }

    return 0;
}