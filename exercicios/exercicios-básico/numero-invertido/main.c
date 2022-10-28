#include<stdio.h>

int main(){
int num, centena, dezena, unidade, numInvertido;
scanf("%d", &num);

centena = num/100;
dezena = (num%100)/10;
unidade = (num%100)%10;

numInvertido = unidade * 100 + dezena * 10 + centena * 1;

printf("%d\n", numInvertido);

    return 0;
}