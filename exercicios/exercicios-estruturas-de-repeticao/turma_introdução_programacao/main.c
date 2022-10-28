#include<stdio.h>
#define presencaMinima 128 * 0.75

int main(){
double p1, p2, p3, p4, p5, p6, p7, p8, MP;
double l1, l2, l3, l4, l5, ML;
double NT, NF;
int matricula, presenca;

scanf("%d  %f %f %f %f %f %f %f %f  %f %f %f %f %f  %f %d", &matricula, &p1, &p2, &p3, &p4, &p5, &p6, &p7, &p8, &l1, &l2, &l3, &l4, &l5, &NT, &presenca);

    while (matricula!=-1)
    {
        MP = (p1+p2+p3+p4+p5+p6+p7+p8)/8.0;
        ML = (l1+l2+l3+l4+l5)/5.0;
        NF = (0.7 * MP) + (0.15 * ML) + (0.15 * NT);

            if(presenca >= presencaMinima && NF >= 6){
                printf("Matricula: %d, Nota Final: %.2lf, Situacao Final: APROVADO\n", matricula, NF);
            }else if(NF < 6 && presenca >= presencaMinima){
                  printf("Matricula: %d, Nota Final: %.2lf, Situacao Final: REPROVADO POR NOTA\n", matricula, NF);
            }else if(NF >= 6 && presenca < presencaMinima){
                   printf("Matricula: %d, Nota Final: %.2lf, Situacao Final: REPROVADO POR FREQUENCIA\n", matricula, NF);
            }else if(NF < 6 && presenca < presencaMinima){
                     printf("Matricula: %d, Nota Final: %.2lf, Situacao Final: REPROVADO POR NOTA E POR FREQUENCIA\n", matricula, NF);
            }

    


    scanf("%d  %f %f %f %f %f %f %f %f  %f %f %f %f %f  %f %d", &matricula, &p1, &p2, &p3, &p4, &p5, &p6, &p7, &p8, &l1, &l2, &l3, &l4, &l5, &NT, &presenca);
    }

    return 0;
}