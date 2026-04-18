//
// Created by Paulo Henrique Goncalves Coelho on 17/04/26.
//

#include <iostream>

using namespace std;

inline float conversor(float valor){
	return valor * 5.02; // Dolar no dia que fiz o programa estava valendo 5 e 02
}

int main() {
    int valor;
    cout << "Informe a quantidade em dolar, usando ponto (ex: 4.90): " ;
	cin >> valor ;
	cout << "Valor convertido em reais: R$" << conversor(valor) << endl;

    return 0;
}