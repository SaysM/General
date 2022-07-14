#include <stdio.h>

int algo(int N1){
    int N2, Soma;
    Soma = N1 + N2;
    return Soma;
}

int menosalgo(int N1){
    int N2, dif;
    dif = N1-N2;
    return dif;
}
int main(){
    int N1, N2, Soma, dif;
    printf("Digite o primeiro numero: ");
    scanf("%i", &N1);
    printf("Digite o segundo numero: ");
    scanf(" %i", &N2);
    Soma=algo(N1);
    dif=menosalgo(N1);

    printf("A soma dos numeros e = %d\n", Soma);
    printf("A diferenca dos numeros e = %d", dif);

    return 0;
}