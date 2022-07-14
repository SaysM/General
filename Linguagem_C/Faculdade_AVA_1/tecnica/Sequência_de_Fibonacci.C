#include <stdio.h>

int main(){
    int j, armazenamento[20], N1;
    armazenamento[0] = 1;
    armazenamento[1] = 1;
    N1 = 20;
    for(j=2;j<N1;j++) {

        armazenamento[j] = armazenamento[j-1] + armazenamento[j-2];  
    }
    printf("Sequencia dos proximos tres numeros e = %d, %d, %d.", armazenamento[10], armazenamento[11],armazenamento[12]);
    return 0;
}