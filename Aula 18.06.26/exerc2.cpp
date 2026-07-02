#include <iostream>

class Contador {
private:
    int valor;

public:
    Contador(int v = 0) : valor(v) {}

    // operador pre-fixado
    Contador& operator++() {
        ++valor;         // incrementa o valor primeiro
        return *this;    // retorna o proprio objeto alterado como ponteiro
    }

    // operador pos-fixado
    Contador operator++(int) {
        Contador temporario = *this; // primeiro precisa guardar o estado atual, para depois mudar
        ++valor;                    // incrementa o valor
        return temporario;          // retorna o valor antigo
    }

    int pegarValor() const { 
        return valor; 
    }
};

int main() {
    Contador c(10);

    std::cout << "Valor inicial:" << c.pegarValor() << "\n";

    // pos fixado teste
    std::cout << "Usando c++: " << (c++).pegarValor() << " (exibiu o antigo)\n";
    std::cout << "Valor real atualizado apos o c++: " << c.pegarValor() << "\n";

    // pre fixado teste
    std::cout << "Usando ++c: " << (++c).pegarValor() << "\n"; //incrementa antes de mostrar

    return 0;
}