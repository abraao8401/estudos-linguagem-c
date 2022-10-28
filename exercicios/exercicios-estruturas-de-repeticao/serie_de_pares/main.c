#include <stdio.h>
#include <stdlib.h>

int main(){
int x, y;
scanf("%d", &x);
scanf("%d", &y);

    if(x%2==0){
        int i = x;
        while(y!=0){
            if(i%2==0){
                printf("%d ", i);
            
            y--;  
            }
        i++;
        } 


    }else{
        printf("O PRIMEIRO NUMERO NAO E PAR\n");
    }

    return 0;
}
