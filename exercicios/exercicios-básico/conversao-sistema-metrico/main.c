#include<stdio.h> 

int main(){
double fah, cel, poleg, milim;
scanf("%lf", &fah);
scanf("%lf", &poleg);

    cel = (5 * (fah-32))/9;
    milim = poleg * 25.4;

    printf("O VALOR EM CELSIUS = %.2lf\n");
    printf("A QUANTIDADE DE CHUVA E = %.2lf\n");

    return 0;
}