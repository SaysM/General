#include <stdio.h>

int main() {

    float N1, N2, soma, mult, div, sub;

    /* Estrutura para realizar o input dos numeros */
    printf("\n---------Calculadora---------\n");
    printf("\n");
    printf("Qual sera o primeiro numero? ");
    scanf("%f", &N1);
    printf("Qual sera o segundo numero? ");
    scanf("%f", &N2);


  
    /*Estrutura para realizar a verificar se o N2 é ou 0*/
    if (N2 == 0){ 
        soma = (N1 + N2);
        mult = (N1 * N2);
        div = 0;
        sub = (N1 - N2);

        printf("Soma = %.1f\n", soma);
        printf("Subtraçao = %.1f\n", sub);
        printf("Multiplicacao = %.2f \n", mult);
        printf("Não foi possivel realizar a divisao pois o denominador é 0");


    } else {
      soma = (N1 + N2);
      mult = (N1 * N2);
      div = (N1 / N2);
      sub = (N1 - N2);


      printf("Soma = %.2f\n", soma);
      printf("Subtraçao = %.2f\n", sub);
      printf("Multiplicacao = %.2f \n", mult);
      printf("Divisao = %.2f \n", div);
    }

    return 0;
    
}