    #include<stdio.h>
    #include<math.h>
     
    int main(){
    double a, b, c; 
    double delta, x1, x2;
    scanf("%lf %lf %lf", &a, &b, &c);
    
     if(!(a==0 && b==0 && c==0)){
         
        delta = (b*b) - (4 * a * c);
         x1 = (-b - sqrt(delta))/(2*a);
         x2 = (-b + sqrt(delta))/(2*a);
     
            if(delta==0){
                printf("RAIZ UNICA\n");
                printf("X1 = %.2lf\n", x1);   
                
            }else if(delta<0){
                printf("RAIZES IMAGINARIAS\n");
                
            }else if(delta>0){
                printf("RAIZES DISTINTAS\n");
                if(x1<x2){
                printf("X1 = %.2lf\n", x1);
                printf("X2 = %.2lf\n", x2);
                }
                if(x2<x1){
                printf("X1 = %.2lf\n", x2);
                printf("X2 = %.2lf\n", x1);
                }
            }
     }
        return 0;
    }