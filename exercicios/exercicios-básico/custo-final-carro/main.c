#include<stdio.h>

int main(){
double precoFabrica, perceDistri, perceImpos, custoFinal;
scanf("%lf %lf %lf", &precoFabrica, &perceDistri, &perceImpos);

double custoDistri, custoImpos;
    custoDistri = precoFabrica * (perceDistri/100);   
    custoImpos =  precoFabrica * (perceImpos/100);  

    custoFinal = precoFabrica + custoDistri + custoImpos;

    printf("O VALOR DO CARRO E = %.2lf\n", custoFinal);

    return 0;
}