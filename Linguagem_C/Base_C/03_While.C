#include <stdio.h>

int main(){
    int x, soma;

    soma = 0;
    printf("Digite o primero numero: ");
    scanf("%i", &x);

    while (x != 0)
    {
        soma = soma + x;
        printf("Digite outro numero: ");
        scanf("%i", &x);
    }
    
    printf("Soma = %i\n", soma);

    return 0;
}