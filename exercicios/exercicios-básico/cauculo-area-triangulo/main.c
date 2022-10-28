#include<stdio.h>
#include<math.h>

int main(){
double L1, L2, L3, area, T;
scanf("%lf %lf %lf", &L1, &L2, &L3);

    T = (L1 + L2 + L3)/2.0;

    area = T*(T-L1)*(T-L2)*(T-L3);
    area = sqrt(area);

    printf("A AREA DO TRIANGULO E = %.2lf\n", area);

    return 0; 
}