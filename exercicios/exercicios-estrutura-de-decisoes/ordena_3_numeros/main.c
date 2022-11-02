#include<stdio.h>

int main(){
double a, b, c;
scanf("%lf %lf %lf", &a, &b, &c);

double maior=a, medio, menor; 
    
        if(b>maior){
            maior = b;
        }
        if(c>maior){
            maior = c;
        }

        if(maior==a){
            medio = b; 
            if(c>medio){
                medio = c;
            }
            if(medio==c){
                menor=b;
            }else{
                menor = c;
            }
        }else if(maior==b){
            medio = a; 
            if(c>medio){
                medio = c;
            }
            if(medio==a){
                menor=c;
            }else{
                menor = a;
            }
        }else if(maior==c){
             medio = a; 
            if(b>medio){
                medio = b;
            }
            if(medio==a){
                menor=b;
            }else{
                menor = a;
            }
        }
printf("%.2lf, %.2lf, %.2lf\n",menor, medio, maior);
       
    return 0;
}