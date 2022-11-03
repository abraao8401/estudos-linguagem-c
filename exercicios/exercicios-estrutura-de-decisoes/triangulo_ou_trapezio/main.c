#include<stdio.h>
#include<math.h>
int main(){
double a, b, c, perimetro, area;
int cont=0;
scanf("%lf %lf %lf", &a, &b, &c);

    if(fabs(b-c) < a && a < b+c){
        cont++;
    }
     if(fabs(a-c) < b && b < a+c){
        cont++;
    }
     if(fabs(a-b) < c && c < a+b){
        cont++;
    }

    if(cont==3){
        perimetro = a + b + c;
         printf("Perimetro = %.1lf\n", perimetro);
     
    }else{
        area = ((a + b) * c)/2;
          printf("Area = %.1lf\n", area);
    }

    return 0;
}