#include <stdio.h>

int main(){
    int M, N, i, j;

    printf("Quantas linhas vai ter a matriz? ");
    scanf("%d", &M);
    printf("Quantas colunos vai ter a matriz? ");
    scanf("%d", &N);

    int mat[M][N];

    for (i=0; i < M; i++) {
        for (j=0; j < N; j++) {
            printf("Elemento [%i, %i]: ", i, j);
            scanf("%i", &mat[i][j]);
        }
    }

    printf("\n Matriz Digitada \n");

    for (i=0; i<M; i++) {
        for (j=0; j<N; j++) {
            printf("%i", mat[i][j]);
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}