#include<stdio.h> 

int main(){
int matricula, numDependentes;
double salarioMinimo, salarioFuncionario, taxaPaga;
double impostoNormal, impostoBruto, impostoLiquido, impostoSerPago;

scanf("%d", &matricula);
scanf("%lf %d %lf %lf", &salarioMinimo, &numDependentes, &salarioFuncionario, &taxaPaga); 

    impostoNormal = (taxaPaga/100) * salarioFuncionario;
    
        if(salarioFuncionario > (12 * salarioMinimo)){
            impostoBruto = (20/100) * salarioFuncionario;
        }else if(salarioFuncionario > (salarioMinimo+ salarioMinimo +  salarioMinimo +  salarioMinimo +  salarioMinimo)){
            impostoBruto = (0.08) * salarioFuncionario;
        }else{
            impostoBruto = 0;
        }
    impostoLiquido = impostoBruto - (numDependentes * 300.00);
    impostoSerPago = impostoLiquido - impostoNormal;

    printf("MATRICULA = %d\n", matricula);
    printf("IMPOSTO BRUTO = %.2lf\n", impostoBruto);
    printf("IMPOSTO LIQUIDO = %.2lf\n", impostoLiquido);
    printf("RESULTADO = %.2lf\n", impostoSerPago);

    if(impostoSerPago < 0){
        printf("IMPOSTO A RECEBER\n");
    }else{
        printf("IMPOSTO QUITADO\n");
    }

    return 0;
}