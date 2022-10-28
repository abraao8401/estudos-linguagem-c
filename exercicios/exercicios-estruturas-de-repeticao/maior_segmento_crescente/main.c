#include <stdio.h>
int main ()
{
 int n,num,aux=-9999,cont=0,maior=0,i;
 scanf ("%d",&n);
    if(n>0){

     for(i=0; i<n; i++){
     scanf ("%d",&num);
        if(num>aux){
            aux = num;
            cont++;
        }else{
            if(cont>maior){
                maior = cont;
            }
            cont = 1;
            aux = num;
        }
     }
    }
 printf ("O comprimento do segmento crescente maximo e: %d\n",maior-1);
 return 0;
}