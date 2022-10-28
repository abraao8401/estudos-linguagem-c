#include <stdio.h>
#include <stdlib.h>

int main(){
int n, i, primeiro, razao;
scanf("%d %d %d", &primeiro, &razao, &n);
 int termo = primeiro;
 int soma = 0;
    for(i=1; i<=n; i++){
        termo = primeiro + ((i-1)*razao);
        soma+= termo;
    }
    printf("%d\n", soma);
    return 0;
}