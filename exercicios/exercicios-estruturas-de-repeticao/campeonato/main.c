    #include <stdio.h>
     
    int main()
    {int n, i, j, d=1;
     
        scanf("%d", &n);
        
            if(n<2){
                printf("Campeonato invalido!\n");
            }else{
                for(i=1; i<n; i++){
                  
                    for(j=i+1; j<=n; j++){
                        printf("Final %d: Time%d X Time%d\n", d, i, j);
                        d++;
                    }
                    
                }
            }
     
        return 0;
    }