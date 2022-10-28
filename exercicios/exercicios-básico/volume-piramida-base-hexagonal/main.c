#include<stdio.h> 
#include<math.h>

int main(){
double altura, aresta, areaHexagono, volume;
scanf("%lf %lf", &altura, &aresta);

    areaHexagono = (3 * pow(aresta,2) * sqrt(3))/2;
    volume = (pow(3,-1)) * areaHexagono * altura;

    printf("O VOLUME DA PIRAMIDE E = %.2lf METROS CUBICOS\n", volume);
    



    return 0;
}