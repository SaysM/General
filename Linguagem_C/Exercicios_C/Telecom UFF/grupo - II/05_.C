#include <stdio.h>

int main(){

    int i, n;
    double Media, N1, N2;
    char media[99];

    printf("Quantos alunos serao digitados? ");
    scanf("%i", &n);


    for(i=0; i<n; i++){

        printf("Digite a primeira nota: ");
        scanf(" %lf", &N1);
        printf("Digite a segunda nota: ");
        scanf(" %lf", &N2);
        Media = (N1 + N2) / 2;
        media[i] = Media;
    }

    for(i=0; i<n; i++){
        printf("O %i aluno tem a media de = %.2d \n",i+1, media[i]);

    }

    return 0;

}