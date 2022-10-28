#include <stdio.h>
#include<math.h>

int main(){
double A, B, C, delta;
scanf("%lf %lf %lf", &A, &B, &C);

    delta = pow(B,2) - 4 * A * C;

    printf("O VALOR DE DELTA E = %.2lf\n", &delta);

    return 0;
}