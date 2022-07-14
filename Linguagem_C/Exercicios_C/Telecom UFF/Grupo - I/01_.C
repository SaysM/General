#include <stdio.h>

int main(){

    int m;
    double Dc, Cm, Ml;

    printf("Qual o valor em metros? ");
    scanf("%i", &m);

    Dc = m * 10;
    Cm = m * 100;
    Ml = m * 1000;

    printf("Decimetros: %2.lf \n", Dc);
    printf("Centimetros: %2.lf \n", Cm);
    printf("Milimetros: %2.lf \n", Ml);

    return 0;
}