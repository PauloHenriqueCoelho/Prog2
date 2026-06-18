#include <iostream>
#include <stack>
#include <string>
#include <sstream>

int main() {
    std::stack<std::string> historicoPalavras;
    std::string textoDigitado = "Aula de programacao 2 com cpp";
    
    std::stringstream ss(textoDigitado);
    std::string palavra;

    while (ss >> palavra) {
        std::cout << "Inserindo: " << palavra << std::endl;
        historicoPalavras.push(palavra); // empilha a palavra atual
    }

    std::cout << "\nSimulando ctrl z" << std::endl;
    while (!historicoPalavras.empty()) {     // desempilha mostrando em ordem invertida
        std::cout << "Removendo do topo: " << historicoPalavras.top() << std::endl;
        historicoPalavras.pop();
    }

    return 0;
}