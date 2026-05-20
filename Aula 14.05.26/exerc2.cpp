#include <iostream>

int main() {
    const int TAMANHO = 100;
    double a[TAMANHO];
    double soma = 0.0;
    int contador = 0;
    double valor;

    std::cout << "Digite ate " << TAMANHO << " valores (digite um valor negativo para parar):" << std::endl;

    for (int j = 0; j < TAMANHO; ++j) {
        std::cout << "Valor " << j + 1 << ": ";
        std::cin >> *(a + j);

        if (*(a + j) < 0) {
            break;
        }
        contador++;
    }


    double* aPtr = a;
    for (int j = 0; j < contador; ++j) {
        soma += *(aPtr + j);
    }


    if (contador > 0) {
        double media = soma / contador;
        std::cout << "Quantidade de valores: " << contador << std::endl;
        std::cout << "Soma total: " << soma << std::endl;
        std::cout << "Média: " << media << std::endl;
    }

    return 0;
}