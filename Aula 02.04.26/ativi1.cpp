#include <iostream>
#include <string>

using namespace std;

int main(){

    int idade;
    string nome;

    cout <<"Digite nome completo: ";
    getline (cin,nome);

    cout <<"Digite sua Idade: ";
    cin >> idade;

    cout <<"Seu nome: "<< nome <<endl;
    cout <<"Sua idade: "<< idade <<endl;
    
    return 0;
}