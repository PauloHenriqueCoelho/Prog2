#include <iostream>
#include <string>

using namespace std;

int main(){

    int idade;
    float nota1 , nota2 , nota3;
    string aluno;

    cout <<"Digite nome completo: ";
    getline (cin,aluno);
    cout <<"Digite sua idade: ";
    cin >> idade;
    cout <<"Informe as 3 notas: ";
    cin >> nota1 >> nota2 >> nota3;

    float media = (nota1 + nota2 + nota3) / 3;

    cout <<"_______________________________________________________________________"<<endl;

    cout <<"Aluno: "<< aluno <<endl;
    cout <<"Idade: "<< idade <<endl;
    cout <<"Nota 1: "<< nota1 <<" |Nota 2: "<< nota2 <<" |Nota 3: "<< nota3 <<endl;
    cout <<"Media Final: "<< media <<endl;
    cout <<"_______________________________________________________________________"<<endl;

    return 0;
}