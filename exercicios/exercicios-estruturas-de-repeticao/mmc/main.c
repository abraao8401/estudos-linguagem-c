#include<stdio.h>
#include<math.h>

int main(){
int i, repeticao=0, indice, acumulador=1;
unsigned int num1, num2, num3;
scanf("%d %d %d", &num1, &num2, &num3);


    i=2;
    while((num1>1)&&(num2>=1)&&(num3>=1)){
        
    
       if(num1%i!=0 && num2%i!=0 && num3%i!=0){
        i++;
        repeticao=0;
       }else{

            if(num1%i==0 && num2%i==0 && num3%i==0 && num1!=1 && num2!=1 && num3!=1){
                 printf("%d %d %d :%d\n", num1, num2, num3, i);
                num1 = num1/i;
                num2 = num2/i;
                num3 = num3/i;
                indice = i;
                repeticao++;
               
            }else if(num1%i==0 && num2%i==0 && num1!=1 && num2!=1){
                  printf("%d %d %d :%d\n", num1, num2, num3, i);
                num1 = num1/i;
                num2 = num2/i;
                indice = i;
                repeticao++;
               
            }else if(num1%i==0 && num3%i==0 && num1!=1 && num3!=1){
                 printf("%d %d %d :%d\n", num1, num2, num3, i);
                num1 = num1/i;
                num3 = num3/i;
                indice = i;
                repeticao++;
               
            }else if(num2%i==0 && num3%i==0 && num2!=1 && num3!=1){
                 printf("%d %d %d :%d\n", num1, num2, num3, i);
                num2 = num2/i;
                num3 = num3/i;
                indice = i;
                repeticao++;
                
            }else if(num1%i==0 && num1!=1){
                 printf("%d %d %d :%d\n", num1, num2, num3, i);
                num1 = num1/i;
                indice = i;
                repeticao++;
               
            }else if(num2%i==0 && num2!=1){
                printf("%d %d %d :%d\n", num1, num2, num3, i);
                num2 = num2/i;
                indice = i;
                repeticao++;
                 
            }else if(num3%i==0 && num3!=1){
                printf("%d %d %d :%d\n", num1, num2, num3, i);
                num3 = num3/i;
                indice = i;
                repeticao++;
                
            }
            
           
     acumulador*= pow(indice, repeticao);
       } 
  
       
    }
    printf("Acumulador: %d", acumulador);
    return 0;
}