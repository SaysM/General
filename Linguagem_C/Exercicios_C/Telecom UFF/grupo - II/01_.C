#include <stdio.h>

int main (){
    int N1, N2, V, i;
    char Valor[20];
    printf("Digite Dois valores \n");
    printf("O primeiro: ");
    scanf("%i[^\n]", &N1);
    printf("O segundo: ");
    scanf("%i[^\n]", &N2);

    if (N1 > N2) {
        V = N1 - N2;
    }else{
        if (N1 < N2) {
            V = N2 - N1;
        }else{
            V = 0;
        }
    }
    if (N1 < N2) {
        for (i = 0; i < V; i++){
            Valor[i] = N1 + 1;
            N1 = N1 + 1;
        }
    }else{
         if (N2 < N1){
                for (i = 0; i < V-1; i++){
                Valor[i] = N2 + 1;
                N2= N2 + 1;
            }
        }
    }

    if (V > 0) {
        for(i = 0; i < V-1; i++){
            printf("%i  ", Valor[i]);
        }
    }else{
            printf("Os valores sao iguais!");
        }

    return 0;

}