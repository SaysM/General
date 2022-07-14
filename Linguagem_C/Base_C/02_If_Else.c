#include <stdio.h>

int main(){

    int hora;
    printf("Digite uma hora do dia: ");
    scanf("%i",&hora);

    if(hora < 12){
        printf("Bom dia! \n");
    }
    else{
        if(hora > 18) {
            printf("Boa noite! \n");
        }
        else{
            printf("Boa tarde! \n");
        }
    }

    return 0;

}