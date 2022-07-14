#include <stdio.h>
#include <string.h>

int main(){
    int idade;
    double salario, altura;
    char genero;
    char nome[50];

    idade = 22;
    salario = 3.500,00;
    altura = 1,63;
    genero = 'F';
    strcpy(nome,"rafael oliveira");

    printf("Idade = %d\n", idade);
    printf("Pretenção salarial = %d\n", salario);
    printf("Altura =  %.2lf\n", altura);
    printf("genero = %c\n", genero);
    printf("Nome = %s\n", nome);

    return 0;
    /*
    para printar os dados preciamos obdecer uma formatação
    int = %d
    long int = %li
    long long int = %lli
    float = %f
    double = %lf
    char = %c
    chat texto = %s 
    */
}