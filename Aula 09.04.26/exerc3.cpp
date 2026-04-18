//
// Created by Paulo Henrique Goncalves Coelho on 17/04/26.
//

#include <iostream>

using namespace std;

int main() {
    int numero, soma = 0;

    cout << "Digite um numero inteiro positivo: ";
    cin >> numero;

    // O loop vai de 1 ate a metade do numero
    for (int i = 1; i < numero; i++) {

        // parar se a soma ja ultrapassar o numero
        if (soma > numero) {
            break;
        }

        if (numero % i == 0) {
            soma += i; // Se for divisor, soma o valor
        }
    }
    if (soma == numero && numero != 0) {
        cout << "Numero perfeito" << endl;
    } else {
        cout << "Nao e perfeito" << endl;
    }

    return 0;
}