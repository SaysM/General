#include <stdio.h>

int main(){
    double N1, N2, R;
    char S;

    printf("Digite o primeiro nummero: ");
    scanf("%lf",&N1);
   
    printf("Escolha um sinal +, -, *, /: ");
    scanf(" %c", &S);
    
    printf("Digite o segundo nummero: ");
    scanf(" %lf", &N2);

    if (S=='+'){
        R = N1 + N2; 
    }else{
        if (S=='-'){
           R = N1 - N2;
        }else{
            if (S=='*'){
                R = N1 * N2;
            }else{
                if (S=='/'){
                    R = N1 / N2;
                }
            }
        }
    }

    printf(" %.2lf  %c  %.2lf = %.2lf", N1, S, N2, R);

    return 0;


}
