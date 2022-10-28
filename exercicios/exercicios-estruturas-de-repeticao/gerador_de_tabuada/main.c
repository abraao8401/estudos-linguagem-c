    #include <stdio.h>
     
    int main()
    { int n, k, i;
      double s, j;
      int cont;
    scanf("%d %d %d %lf", &n, &i, &k, &s);
     
         printf("Tabuada de soma:\n");
            j= (float)i;
            for(cont=1; cont <= k; cont++ ){
                printf("%.2lf + %.2lf = %.2lf\n", (double) n, (double) j, (double) (n + j));
                j+=s;
            }
     
         printf("Tabuada de subtracao:\n");
            j= (float)i;
            for(cont=1; cont <= k; cont++ ){
                printf("%.2lf - %.2lf = %.2lf\n", (double) n, (double) j, (double) (n - j));
                j+=s;
            }
            
         printf("Tabuada de multiplicacao:\n");
            j= (float)i;
            for(cont=1; cont <= k; cont++ ){
                printf("%.2lf x %.2lf = %.2lf\n", (double) n, (double) j, (double) (n * j));
                j+=s;
            }
        
         printf("Tabuada de divisao:\n");
            j= (float)i;
            for(cont=1; cont <= k; cont++ ){
                printf("%.2lf / %.2lf = %.2lf\n", (double) n, (double) j, (double) (n / j));
                j+=s;
            }
     
        return 0;
    }