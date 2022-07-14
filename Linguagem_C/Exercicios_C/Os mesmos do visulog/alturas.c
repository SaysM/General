#include <stdio.h>

void limpar_entrada(){
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}    
int main(){

    int i, n, cont;
    char *Nome[9], *Menor[9];
    int idade[9];
    double Altura[9];
    double Amedia, ASoma, PMenor;

    printf("Quantas pessoas serao digitadas? ");
    scanf("%i",&n);

    ASoma = 0;
    cont = 0;

    for(i = 0; i < n; i++){
        printf("Dados da %i a pessoa: \n", i+1);  
        printf("Nome: ");
        scanf("%s[^\n]",&Nome[i]);
        limpar_entrada();
        printf("Idade: ");
        scanf("%i[^\n]",&idade[i]);
        limpar_entrada();
        printf("Altura: ");
        scanf("%lf[^\n]",&Altura[i]);
        limpar_entrada();
        ASoma = ASoma + Altura[i];
        
       
        

    }

    for(i = 0; i <n; i++){

        if (idade[i] < 16){
            Menor[i] = Nome[i];
            cont = cont + 1;
        }
    }
    


    PMenor = (cont / n-1) * 100;
    Amedia = (ASoma / n-1);

    printf("   \n");

    printf("Altura medida: %.2lf\n", Amedia);
    printf("Pessoas com menos de 16 anos: %.2lf\n", PMenor);


    for(i= 0; i < cont; i++){
        
        printf("%s", Menor[i]);
    } 

    return 0;

}