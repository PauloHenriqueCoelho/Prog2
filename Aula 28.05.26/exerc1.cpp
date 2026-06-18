#include <iostream>
#include <string>

class Gato {
private:
    std::string nome;
    int idade;
    double peso;

public:
    // Construtor
    Gato(std::string n, int i, double p) : nome(n), idade(i) {
        setPeso(p);
    }

    // Setters e Getters
    void setNome(std::string n) { 
        nome = n; 
    }
    std::string getNome() const {
        return nome; 
    }

    void setIdade(int i) { 
        idade = i; 
    }
    int getIdade() const {
        return idade; 
    }

    void setPeso(double p) {
        if (p > 0.0) {
            peso = p;
        } else {
            std::cerr << "Erro: O peso do gato deve ser maior que zero, colocando como 1\n";
            if (peso <= 0.0) {
                peso = 1.0;
            }
        }
    }
    double getPeso() const { 
        return peso; 
    }

    void exibirDados() const {
        std::cout << "Gato: " << nome << " | idade: " << idade << " anos | Peso: " << peso << " kg\n";
    }
};

int main() {
    Gato meuGato("Mingau", 3, 4.5);
    meuGato.exibirDados();

    meuGato.setPeso(-2.0); //tenta colocar um numero invalido, só pode numero positivo e maior q zero
    meuGato.exibirDados();

    return 0;
}