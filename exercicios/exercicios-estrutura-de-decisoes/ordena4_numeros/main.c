#include<stdio.h>

int main(){
double a, b, c, d, maior, intermed, medio, menor;
scanf("%lf %lf %lf %lf", &a, &b, &c, &d);

maior = a; 
    if(b>maior) maior = b;
    if(c>maior) maior = c;
    if(d>maior) maior = d;
    
    if(maior==a){
        intermed = b;
        if(c>intermed) intermed = c;
        else if(d>intermed) intermed = d;

    }else if(maior==b){
        intermed = a;
        if(c>intermed) intermed = c;
        else if(d>intermed) intermed = d;
        

    }else if(maior==c){
        intermed = a;
        if(b>intermed) intermed = b;
        else if(d>intermed) intermed = d;
        

    }else if(maior==d){
        intermed = a;
        if(c>intermed) intermed = c;
        else if(b>intermed) intermed = b;
        
    }

    if(maior==a){

        if(intermed==b){
            medio = c; menor = d;
            if(d>medio) medio = d, menor = c;

        }else if(intermed==c){
            medio = b; menor = d;
        if(d>medio) medio = d, menor = b;
            
        }else if(intermed==d){
            medio = b; menor = c;
            if(c>medio) medio = c, menor=b;
            
        }
    }else if(maior==b){

        if(intermed==a){
        medio = c; menor = d;
        if(d>medio) medio = d, menor = c;

        }else if(intermed==c){
            medio = a; menor = d;
        if(d>medio) medio = d, menor = a;
            
        }else if(intermed==d){
            medio = a; menor = c;
            if(c>medio) medio = c, menor=a;
            
        }
    }else if(maior==c){

        if(intermed==a){
        medio = b; menor = d;
        if(d>medio) medio = d, menor = b;

        }else if(intermed==b){
            medio = a; menor = d;
        if(d>medio) medio = d, menor = a;
            
        }else if(intermed==d){
            medio = a; menor = b;
            if(b>medio) medio = b, menor=a;
            
        }
    }else if(maior==d){
        
        if(intermed==a){
        medio = b; menor = c;
        if(c>medio) medio = c, menor = b;

        }else if(intermed==b){
            medio = a; menor = c;
        if(c>medio) medio = c, menor = a;
            
        }else if(intermed==c){
            medio = a; menor = b;
            if(b>medio) medio = b, menor=a;  
        }
    }
        
    printf("%.2lf, %.2lf, %.2lf, %.2lf\n", menor, medio, intermed, maior);
        return 0; 
 }


