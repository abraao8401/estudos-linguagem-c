#include<stdio.h>
#include<math.h>

int main(){
double d;
scanf("%lf", &d);

     int res = 0;
    while(d != (long)d)
    {
        res++;
        d = d*10;
    }

    
    int numerador = (int) d;
    int denominador = pow(10,res);
    int maior = numerador;
    if(denominador>maior){
        maior = denominador;
    }
    int i;
    for(i=2; i<=maior; i++){
       
        if(numerador%i==0 && denominador%i==0){
            inicio:
            numerador = numerador/i;
            denominador = denominador/i;
                if(numerador%i==0 && denominador%i==0){
                    goto inicio;
                }
        }
         
      
    }
   
   printf("%d/%d\n", numerador, denominador);

    return 0;
}