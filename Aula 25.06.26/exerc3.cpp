#include <iostream>
#include <string>

// CLASSE BASE -> veiculo
class Veiculo {
public:
    std::string marca;

    // construtor
    Veiculo(std::string m) : marca(m) {}

    virtual void emitirSom() const {
        std::cout << "BRAMM BAM BAM BAM BAM\n";
    }

    // destrutor
    virtual ~Veiculo() = default;
};

// CLASSE DERIVADA -> carro
class Carro : public Veiculo {
public:
    int numeroPortas;

    // Construtor o outro construtor
    Carro(std::string m, int portas) : Veiculo(m), numeroPortas(portas) {}

    // Sobrescrita (override) do método virtual
    void emitirSom() const override {
        std::cout << "O carro da  " << marca << " esta buzinando. BOOOIM\n";
    }
};

int main() {
    // criando um objeto da classe mae
    Veiculo v1("Generico");
    std::cout << "Testando Veiculo Base:\n";
    v1.emitirSom();

    // criando um objeto da classe derivada
    Carro c1("BYD", 4);
    std::cout << "Testando Carro Derivado (Marca: " << c1.marca 
              << ", Portas: " << c1.numeroPortas << "):\n";
    c1.emitirSom();

    return 0;
}