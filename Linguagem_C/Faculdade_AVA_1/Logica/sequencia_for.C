#include <stdio.h>
int parouimpar(int N1, int N2){
    double par,T;
    int i,cont,t,contpar;
    contpar = 0;
    for(i=N1+1;i<N2;i++){
        t = i;
        T = i/ 2;
        par = i / T;
        if(i == 0){
            printf("0 é par\n ");
            contpar = (contpar + 1);
        }else{
            if (par == 2){
                printf("O numero %i e par\n", t);
                contpar = (contpar + 1);
            }else{
                printf("O numero %i e impar\n", t);
        }
        }        
    }
    printf("O numero de pares sao: %i", contpar);
    return 0;
}
int main(){
    int N1,N2,cont;
    printf("Digite o primeiro numero: ");
    scanf("%i",&N1);
    printf("Digite o segundo numero: ");
    scanf("%i",&N2);
    parouimpar(N1,N2);
    return 0;
}