#include<stdio.h>

int main(){
unsigned int a, b, c, maior, medio, menor; 
char letra1, letra2, letra3;
scanf("%d %d %d", &a, &b, &c);
getchar();
scanf("%c%c%c", &letra1, &letra2, &letra3);


maior = a;
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

        if(letra1=='A'){
            if(letra2 == 'B'){
                printf("%d %d %d\n", menor, medio, maior);
            }else{
                printf("%d %d %d\n", menor, maior, medio);
            }
        }else if(letra1== 'B'){
               if(letra2 == 'A'){
                printf("%d %d %d\n", medio, menor, maior);
            }else{
                printf("%d %d %d\n", medio, maior, menor);
            } 
        }else if(letra1 == 'C'){
            if(letra2 == 'A'){
                printf("%d %d %d\n", maior, menor, medio);
            }else{
                printf("%d %d %d\n", maior, medio, menor);
            } 
        }
    return 0;
}