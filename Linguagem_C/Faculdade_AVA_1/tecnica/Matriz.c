#include <stdio.h>
void limpar_entrada(){
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}
int main(){
    int i, j,matriz[9][9];
    printf("Digite os elementos da matriz 3x3 abaixo\n");
    for(i=0; i < 3; i++){
        for(j=0; j < 3; j++){
            printf("O  elemento %ix%i e: ", i+1, j+1);
            scanf("%i", &matriz[i][j]);
            limpar_entrada();
            matriz[i][j] = matriz[i][j] * 5;
        }
    }
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
           printf("%i ",matriz[i][j]);
        }
        printf("\n");
    }
}