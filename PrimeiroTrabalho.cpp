//
// Created by Paulo on 21/04/2026.
//

#include <iostream>
#include <string>

using namespace std;

struct Aluno {
    string nome;
    float nota;
};

int main() {
    Aluno aluno[10];
    float soma = 0;

    for (int i = 0; i < 10; i++) {
        cout << "Digite nome do aluno" << endl;
        getline(cin >> ws, aluno[i].nome); //ws serve para ignorar espacos em brancos e quebra de texto antes do nome

        cout << "Digite a nota de "<< aluno[i].nome << endl;
        cin >> aluno[i].nota; // armazena nota

        soma += aluno[i].nota; // ja calcula a soma pra depois fazer a media
    }

    float media = soma / 10.0; //calcula a media
    char letra;

    cout << "A media da turma eh: " << media << endl << endl;

    cout << "Qual letra os nomes devem comecar? " << endl;

    cin >> letra;

    cout << "Alunos que comecam com '"<< letra << "' e possuem nota maior que " << media << endl;

    int indice;

    for (int i = 0; i < 10; i++) {
        if (aluno[i].nota > media && toupper(aluno[i].nome[0]) == toupper(letra)) { // verifica se esta acima da media e o nome comeca com a letra informada
            cout << "Nome: " << aluno[i].nome << " | Nota: " << aluno[i].nota << endl;
        }

    }

    return 0;
}