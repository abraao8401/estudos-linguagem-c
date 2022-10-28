    #include <stdio.h>
     
    int main()
    {
        int n, i;
        long int fat = 1;
        scanf("%d", &n);
        
            for(i=2; i<=n; i++){
                fat *= i;
            }
            
            printf("%d! = %ld\n", n, fat);
     
        return 0;
    }