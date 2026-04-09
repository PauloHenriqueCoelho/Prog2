#include <iostream>
#include <string>

using namespace std;

int main(){

    int idade;
    float altura;
    string nome;

    cout <<"Digite nome completo: ";
    getline (cin,nome);
    cout <<"Digite sua idade: ";
    cin >> idade;
    cout <<"Digite sua altura: ";
    cin >> altura;

    cout <<"Seu nome: "<< nome <<endl;
    cout <<"Sua altura: "<< altura <<endl;
    cout <<"Sua idade: "<< idade <<endl;
    
    return 0;
}