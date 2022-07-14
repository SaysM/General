#include <stdio.h>

int main(){
    double C, F;


    printf("Qual o valor em em Fahrenheit? ");
    scanf("lf%", &F);

    C = (F - 32.0)*(5.0/9.0);

    printf("O valor em celcius e: %.2lf  ", C);

    return 0;

}