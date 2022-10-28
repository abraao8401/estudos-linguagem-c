#include<stdio.h>

int main(){
int i, j, linhas, colunas;
scanf("%d", &linhas);
scanf("%d", &colunas);

    for(i=1; i<=linhas; i++){
        for(j=1; j<=colunas; i++){
            if(i>j)
            printf("- (%d,%d)", i, j);
        }
        printf("\n");
    }


    return 0;
}