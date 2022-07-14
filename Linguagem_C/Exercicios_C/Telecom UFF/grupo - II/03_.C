#include <stdio.h>

int main(){
    int valor;
    double infra10, infra20, taxa;

    printf("Digite o valor do produto: ");
    scanf("%i", &valor);

    if(valor < 100){
        taxa = (valor/10) * 1;
        infra10 = valor+ taxa;
        printf("Valor inflacionado a 10 porcento = %.2f", infra10);
    }else{
        if(valor>=100){
            taxa = (valor/10) * 2;
            infra20 = valor+taxa;
            printf("Valor inflacionado a 20 porcento = %.2f", infra20);
        }else{
            printf("Numero invalido!");
        }
    }
    return 0;
}

