#include <iostream>
#include <string>
#include <utility>

class StringSegura {
private:
    std::string conteudo;

public:
    StringSegura() = default; // cria um construtor padrao
    StringSegura(std::string texto) : conteudo(texto) {}
    ~StringSegura() = default; // cria um destrutor padrao

    // Diretivas = default para permitir movimentação na memória
    StringSegura(StringSegura&& outra) = default;             
    StringSegura& operator=(StringSegura&& outra) = default;  

    // Diretivas = delete para proibir cópia e atribuição tradicional
    StringSegura(const StringSegura& outra) = delete;            
    StringSegura& operator=(const StringSegura& outra) = delete; 

    void mostrar() const { 
        std::cout << conteudo << "\n"; 
    }
};

int main() {
    StringSegura s1("minha senha confidencial");

    // transfere os dados de s1 para s3 
    StringSegura s3 = std::move(s1); 

    std::cout << "Dados movidos para s3: ";
    s3.mostrar();

    return 0;
}