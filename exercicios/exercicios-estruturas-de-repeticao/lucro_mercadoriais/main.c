#include<stdio.h>


int main(){
unsigned long int codigo;
double precoCompra, precoVenda;
int numVendas;
int menor10=0, maior10_igual20=0, maior20=0;
double valorTotalCompras=0, valorTotalVendas=0, perceLucroTotal=0; 
float maiorLucro = 0.0;
int maisVendida = 0;
int codigoMaiorLucro, codigoMaisVendida;


while(scanf("%ld %lf %lf %d", &codigo, &precoCompra, &precoVenda, &numVendas)!= EOF){
float perce10 = precoCompra * 0.1;
float perce20 = precoCompra * 0.2;
float lucroMercadoria = precoVenda - precoCompra;

    if(lucroMercadoria> perce20){
        maior20++;
    }else if(lucroMercadoria > perce10 && lucroMercadoria <= perce20){
        maior10_igual20++;
     }else if(lucroMercadoria<perce10){
        menor10++;
     }

    if(lucroMercadoria>maiorLucro){
        maiorLucro = lucroMercadoria;
        codigoMaiorLucro = codigo;
    }

    if(numVendas>maisVendida){
        maisVendida = numVendas;
        codigoMaisVendida = codigo;
    }

    valorTotalCompras += (precoCompra*numVendas);
    valorTotalVendas += (precoVenda*numVendas);

}

    double LucroTotal = (valorTotalVendas - valorTotalCompras);
    perceLucroTotal = (LucroTotal * 100)/valorTotalCompras;

    printf("Quantidade de mercadorias que geraram lucro menor que 10%%: %d\n", menor10);
     printf("Quantidade de mercadorias que geraram lucro maior ou igual a 10%% e menor ou igual a 20%%: %d\n", maior10_igual20);
      printf("Quantidade de mercadorias que geraram lucro maior do que 20%%: %d\n", maior20);
       printf("Codigo da mercadoria que gerou maior lucro: %d\n", codigoMaiorLucro);
        printf("Codigo da mercadoria mais vendida: %d\n", codigoMaisVendida);
         printf("Valor total de compras: %.2lf, valor total de vendas: %.2lf e percentual de lucro total: %.2lf%%\n", valorTotalCompras, valorTotalVendas, perceLucroTotal);

    return 0;
}