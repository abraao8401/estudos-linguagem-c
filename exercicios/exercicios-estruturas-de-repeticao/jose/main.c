#include <stdio.h>

int main()
{
    int t, a, b; 
scanf("%d", &t);
    
    while(t!=0){
        scanf("%d %d", &a, &b);
        int centenaA, dezenaA, unidadeA; 
        int centenaB, dezenaB, unidadeB;
        
        centenaA = a/100; 
        dezenaA = (a%100)/10;
        unidadeA = (a%100)%10;
        
        int invertidoA = unidadeA * 100 + dezenaA * 10 + centenaA * 1;
        
        centenaB = b/100; 
        dezenaB = (b%100)/10;
        unidadeB = (b%100)%10;
        
        int invertidoB = unidadeB * 100 + dezenaB * 10 + centenaB * 1;
        
        if(invertidoA>invertidoB){
            printf("%d\n", invertidoA);
        }else{
            printf("%d\n", invertidoB);
        }
        
        t--;
    }
    

    return 0;
}
