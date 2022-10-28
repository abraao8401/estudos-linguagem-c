    #include <stdio.h>
     
    int main()
    {long int n;
    int cont = 0, cont2 = 0, i;
    scanf("%ld", &n);
     
        if(n<0){
            printf("Numero Invalido!\n");
            
        }else{
            if(n==0){
                printf("NAO PRIMO\n");
            }else if(n==1){
                printf("NAO PRIMO\n");
             }else if(n==2){
                printf("PRIMO\n");
             }else{
                  if(n%1==0 && n%n == 0){
                    cont=1;
                    }
                    for(i=2; i<n; i++){
                        if(n%i==0)
                            cont2 = 1;
                    }
               
                   if(cont == 1 && cont2 == 0){
                       printf("PRIMO\n");
                   }else{
                        printf("NAO PRIMO\n");
                   }
        }
    }
     
        return 0;
    }