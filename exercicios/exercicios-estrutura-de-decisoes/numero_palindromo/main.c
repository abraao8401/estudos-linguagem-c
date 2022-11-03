#include<stdio.h> 

int main(){
int num; 
scanf("%d", &num);
    if(num > 99999){
        printf("NUMERO INVALIDO\n");
    }else{
         int casa1, casa2, casa3, casa4, casa5; 
        if(num>9999){
            casa5 = num/10000;
            casa4 = (num%10000)/1000;
            casa3 = ((num%10000)%1000)/100;
            casa2 = (((num%10000)%1000)%100)/10;
            casa1 = (((num%10000)%1000)%100)%10;

                if(casa5==casa1){
                    if(casa4==casa2){
                        printf("PALINDROMO\n");
                    }else{
                        printf("NAO PALINDROMO\n");
                    }
                }else{
                    printf("NAO PALINDROMO\n");
                }
        }else if(num>999){
            casa4 = num/1000;
            casa3 = (num%1000)/100;
            casa2 = ((num%1000)%100)/10;
            casa1 = ((num%1000)%100)%10;

               if(casa4==casa1){
                    if(casa3==casa2){
                        printf("PALINDROMO\n");
                    }else{
                        printf("NAO PALINDROMO\n");
                    }
                }else{
                    printf("NAO PALINDROMO\n");
                }

        }else if(num>99){
            casa3 = num/100;
            casa2 = (num%100)/10;
            casa1 = (num%100)%10;

                if(casa3==casa1){
                        printf("PALINDROMO\n");
                }else{
                    printf("NAO PALINDROMO\n");
                }
        }
    }
    return 0;
}