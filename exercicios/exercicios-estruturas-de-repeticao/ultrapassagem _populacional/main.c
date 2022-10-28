        #include <stdio.h>
         
        int main()
        { int A, B, ano = 0;
        float crescimentoA, crescimentoB;
        scanf("%d", &A);
        scanf("%d", &B);
         
        while(A < B){
            
            crescimentoA = (A * 3)/100;
            crescimentoB = (B * 1.5)/100;
            
            A += crescimentoA;
            B += crescimentoB;
            ano++;
        }
         
            printf("ANOS = %d\n", ano);
         
         
            return 0;
        }