#include<stdio.h> 

int main(){
char consumidor; 
int contaCliente; 
double consumo, valorConta; 
scanf("%d %lf %c", &contaCliente, &consumo, &consumidor); 

    if(consumidor=='C'){
        if(consumo <= 80){
            valorConta = 500.00;
        }else{
            valorConta = 500 + ((consumo-80)* 0.25);
        }
        
    }else if(consumidor == 'I'){
        if(consumo <= 100){
            valorConta = 800.00;
        }else{
            valorConta = 800 + ((consumo-100) * 0.04);
        }
        
    }else if(consumidor == 'R'){
            valorConta = 5 + (consumo * 0.05);
        
    }

    printf("CONTA = %d\n", contaCliente);
    printf("VALOR DA CONTA = %.2lf\n", valorConta);


    return 0; 
}