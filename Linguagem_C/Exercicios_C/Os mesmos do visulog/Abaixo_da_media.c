#include <stdio.h>

int main(){

    int i, N;
    double soma, Media;
    int vetor[9];

    printf("Quantos elementos vai ter o vetor? ");
    scanf("%i",&N);

    for(i = 0; i < N; i++){
        printf("Digite um numero: ");
        scanf("%d",&vetor[i]);
        soma = soma + vetor[i];
    }

    Media = soma / N;

    printf("Media do vetor = %.2lf\n",Media);
    
    printf("Elementos abaixo da media: \n");

    for (i = 0; i < N; i++){
        if (vetor[i] < Media){
            printf("%i",vetor[i]);
        }
    }

    return 0;

}