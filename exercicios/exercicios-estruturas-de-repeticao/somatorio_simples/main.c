#include<stdio.h>
#include<stdlib.h>

int main(){
int n, k=1;
double soma= 0.0;

scanf("%d", &n);

    for(k=1; k<=n; k++){
        soma += (1.0/k); 
    }
printf("%.6lf\n", soma);

    return 0;
}