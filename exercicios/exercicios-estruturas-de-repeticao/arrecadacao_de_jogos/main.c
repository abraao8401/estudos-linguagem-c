    #include <stdio.h>
    #include <stdlib.h>
     
        int main(){
            int teste, publico; 
            double percPop, percGeral, percArq, percCad;
            double rendaTotal, rendaPop, rendaGeral, rendaArq, rendaCad;
            int jogo = 1;
            scanf("%d", &teste);
            while(teste != 0){
                scanf("%d %lf %lf %lf %lf", &publico, &percPop, &percGeral, &percArq, &percCad);
     
                rendaPop = 1 * (publico * (percPop/100));
                 rendaGeral = 5 * (publico * (percGeral/100));
                  rendaArq= 10* (publico * (percArq/100));
                   rendaCad = 20 * (publico * (percCad/100));
     
                   rendaTotal = rendaPop + rendaGeral + rendaArq + rendaCad;
     
                   printf("A RENDA DO JOGO N. %d E = %.2lf\n", jogo, rendaTotal);
     
                teste--;
                jogo++;
            }
     
            return 0;
        }