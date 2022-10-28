#include <stdio.h>

int main (){
int matricula;
double horas;
double valor_hora, salario;

     scanf("%d %lf %lf", &matricula, &horas, &valor_hora);
     getchar();

     while(matricula!=0){
        salario = horas * valor_hora;
        printf("%d %.2lf\n", matricula, salario);

     scanf("%d %lf %lf", &matricula, &horas, &valor_hora);
     getchar();
     }
     
    return 0;
    }