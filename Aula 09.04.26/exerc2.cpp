//
// Created by Paulo Henrique Goncalves Coelho on 17/04/26.
//

#include <iostream>

using namespace std;

int main() {
    int saldo = 1000;
    bool navegando = true;
    int opcao;
    while (navegando){
        cout << "Menu" << endl;
        cout << "1. Ver saldo" << endl;
        cout << "2. Depositar" << endl;
        cout << "3. Sacar" << endl;
        cout << "4. Sair" << endl;

        cin >> opcao;
        switch (opcao) { // Ver saldo
            case 1:
                cout << "----------------------------------"<< endl;
                cout << "Seu saldo é de: " << saldo << endl;
                break;
            case 2:  // Depositar
                cout << "----------------------------------"<< endl;
                cout << "Quanto deseja depositar?" << endl;
                int deposito;
                cin >> deposito;
                saldo += deposito;
                deposito = 0;

                break;
            case 3:  // Sacar
                cout << "----------------------------------"<< endl;
                cout << "Quanto deseja sacar" << endl;
                int saque;
                cin >> saque;
                if (saque <= saldo && saque <= 0 && saque > saldo){
                    cout << "Sacando: R$" << saque << endl;
                    saldo -= saque;
                    saque = 0;
                } else if (saque <= 0 || saque > saldo){
                    cout << "Saque invalido!" << endl;
                }
                break;
            case 4:  // Sair
                cout << "----------------------------------"<< endl;
                cout << "Saindo" << endl;
                navegando = false;
                break;
            default:  // Opcao invalida
                cout << "----------------------------------"<< endl;
                cout << "Opcao Invalida!" << endl;
                break;
        }
    }
    return 0;
}