//
// Created by Paulo Henrique Goncalves Coelho on 17/04/26.
//

#include <iostream>

using namespace std;

int main() {
    int idade, autorizacao, nivel;
    cout << "Informe sua idade: " ;
    cin >> idade;
    if (idade < 16){ // Nega entrada na hora
        cout << "Acesso negado" << endl;
        return 1;
    } else if (idade >= 16 && idade <= 17){ // Primeiro ve qual o nivel de autorizacao dele
        cout << "Voce precisa de autorizacao para entrar"<< endl ;
        cout << "Qual seu nivel de autorizacao? (0 a 1)" << endl;
        cin >> autorizacao;
        switch (autorizacao) { // Case que verifica a autorizacao
            case 1:
                cout << "Acesso concedido" << endl;
                break;
            case 0:
                cout << "Acesso negado" << endl;
                break;
            default: // Valor inserido é diferente de 0 e 1
                cout << "Acesso não especificado" << endl;
                break;
        }
    } else {
        cout << "Nível de acesso? [1] Básico, [2] Intermediário, [3] Total." << endl;
        cin >> nivel;
        switch (nivel) { // Case que verifica a autorizacao
            case 1:
                cout << "Acesso concedido no nivel Básico" << endl;
                break;
            case 2:
                cout << "Acesso concedido no nivel Intermediario" << endl;
                break;
            case 3:
                cout << "Acesso concedido no nivel Total" << endl;
                break;
            default: // Valor inserido é diferente de 0 e 1
                cout << "Acesso não especificado" << endl;
                break;
        }
    }
}