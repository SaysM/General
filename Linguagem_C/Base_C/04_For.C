#include <stdio.h>

int main(){
    int N, i, x, Soma;

    printf("Quatos numeros serão digitados\n");
    scanf("%d", &N);

    Soma = 0;
    for (i=1; i <= N; i++) {
        printf("Digite um numero: ");
        scanf("%i", &x);
        Soma = (Soma + x);
    } 

    printf("Soma = %d\n", Soma);
    
    return 0;
}