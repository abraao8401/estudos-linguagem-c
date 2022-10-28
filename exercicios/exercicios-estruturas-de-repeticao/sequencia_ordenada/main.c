#include<stdio.h>

int main(){
int n, i, desor=0;
double num, menor= -999999.99; 
scanf("%d", &n); 

    while(n!= 0){
    for(i=0; i<n; i++){
    scanf("%lf", &num);

        if(num>menor){
            menor = num;
            
        }else{
            menor = num;
            desor++;
       }
    }
    if(desor!=0){
        printf("DESORDENADA\n");
    }else{
        printf("ORDENADA\n");
    }

     desor =0; 
     scanf("%d", &n);  
      
    }

    return 0;
}