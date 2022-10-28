#include<stdio.h>

int main(){
double salario, valor70, valorPago, desconto, valorDesconto, quantidadeKW, cadaKW;
 scanf("%lf %lf", &salario, &quantidadeKW);

    valor70 = salario * 0.7;
    cadaKW = valor70/100.00;
    valorPago = quantidadeKW * cadaKW;
    desconto = valorPago * 0.1;
    valorDesconto= valorPago - desconto;

    printf("Custo por kW: R$ %.2lf\n", cadaKW);;
    printf("Custo do consumo: R$ %.2lf\n", valorPago);
    printf("Custo com desconto: R$ %.2lf\n", valorDesconto);
    return 0;
}