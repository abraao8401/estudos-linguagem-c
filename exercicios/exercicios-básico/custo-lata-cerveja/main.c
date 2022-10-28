#include<stdio.h>
#include<math.h>
#define PI 3.14159

int main(){
double raio, altura;
scanf("%lf", &raio);
scanf("%lf", &altura);

double areaCilindro, areaCirculo, areaLateral;

    areaCirculo = PI * (raio*raio);
    areaLateral = 2 * PI * raio * altura;
    areaCilindro = (2*areaCirculo) + areaLateral;

double custo;

    custo = areaCilindro * 100;

printf("O VALOR DO CUSTO E = %.2lf\n", custo);

    return 0;
}