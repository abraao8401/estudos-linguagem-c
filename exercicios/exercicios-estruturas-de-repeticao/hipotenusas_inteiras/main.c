#include <stdio.h>
#include<math.h>

int main(){
int n, i, j, k;
scanf("%d", &n);

  for(k=1; k<=n; k++){
    for(i=1; i<k; i++){
        for(j=1; j<k; j++){
            if((pow(i,2) + pow(j,2)) == pow(k,2)){
                if(i<=j){
                printf("hipotenusa = %d, catetos %d e %d\n", k, i, j);
                }
            }
        }
    }
}
    

    return 0;
}
