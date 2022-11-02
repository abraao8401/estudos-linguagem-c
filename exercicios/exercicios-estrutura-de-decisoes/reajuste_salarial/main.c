    #include<stdio.h>
     
    int main(){
    double salario, salarioReajustado;
    scanf("%lf", &salario);
     
        if(salario <= 300){
            float reajuste = salario * 0.5;
            salarioReajustado = salario + reajuste;
        }else{
            float reajuste = salario * 0.3;
            salarioReajustado = salario + reajuste;
        }
     
        printf("SALARIO COM REAJUSTE = %.2lf\n", salarioReajustado);
     
        return 0;
    }