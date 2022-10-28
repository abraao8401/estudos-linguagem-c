#include<stdio.h>

int main(){
int num, centena, dezena, unidade, digito, novoNum;  
scanf("%d", &num);

centena = num/100;
dezena = (num%100)/10;
unidade = (num%100)%10;


digito = (centena + (dezena * 3) + (unidade * 5))%7;

novoNum = centena * 1000 + dezena * 100 + unidade * 10 + digito; 

printf("O NOVO NUMERO E = %d\n", novoNum);

    return 0;
}