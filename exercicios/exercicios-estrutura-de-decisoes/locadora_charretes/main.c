    #include<stdio.h>
     
    int main(){
    int horas;
    float valor; 
    scanf("%d", &horas);
        if(horas < 3){
            valor = 5.00 * horas;
        }else if(horas >= 3){
           float  resto = 0;
            valor = 10.00 * (horas/3);
            resto = horas - (3 * (horas/3));
                if(resto!=0){
                    valor +=  (resto * 5);
                }
        }
     
        printf("O VALOR A PAGAR E = %.2f\n", valor);
     
        return 0;
    }