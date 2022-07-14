#include <stdio.h>
#include <math.h>

int main(){

    double N1, N2;
    double S, P, R, Q, Sen, Mod;


    printf("Digite o primeiro numero: ");
    scanf("%lf", &N1);
    printf("Digite o segundo numero: ");
    scanf("%lf", &N2);

    S = (N1 + N2);
    P = N1 * (N2 * N2);
    Q = N1 * N1;
    R = sqrt((N1*N1) + (N2*N2));
    Sen = (sin(N1) * cos(N2) - (sin(N2) * cos(N1))) ; 

    printf("Soma dos numeros: %.2f\n", S);
    printf("O produto do primeiro numero pelo quadrado do segundo: %.2lf\n", P);
    printf("O quadrado do primeiro numero: %.2lf\n", Q);
    printf("A raiz quadrada da soma dos Quadrados: %.2lf\n", R);
    printf("O seno da diferença do primeiro numero pelo segundo: %.2lf\n", Sen);
    printf("O modulo do primeiro numero: %.2lf\n ");

    return 0;
}