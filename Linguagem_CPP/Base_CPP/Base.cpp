#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    int idade;
    double salario, altura;
    char genero;
    string nome;

    idade = 20;
    salario = 5800,5;
    altura = 1.63;
    genero = 'F';
    nome = "Maria Silva";

    cout << fixed << setprecision(2);
    cout << "Idade = " << idade << endl;
    cout << "Salario = " << salario << endl; 
    cout << "Altura = " << altura << endl; 
    cout << "genero = " << genero << endl; 
    cout << "nome = " << nome << endl; 

    return 0;
}