
#include <stdio.h>
#define PI  3.14159265

int main(){
    double raio, circun;

    printf("Entre com o raio: ");
    scanf("%lf", &raio);
    circun = 2 * PI * raio;

    printf("Circunferencia = %.2lf\n", circun);

    return 0;
}