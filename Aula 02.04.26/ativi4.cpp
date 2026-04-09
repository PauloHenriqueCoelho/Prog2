#include <iostream>
#include <string>

using namespace std;

int main(){

    float salario;
    string nome;

    cout <<"Digite seu nome: ";
    getline(cin,nome);
    cout <<"Digite seu salario: ";
    cin >> salario;

    cout <<"Seu nome: "<< nome << endl;
    printf("Seu salario: R$ %.2f\n", salario);

    return 0;
}