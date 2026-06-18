#include <iostream>
#include <string>

class ContaBancaria {
private:
    std::string numeroConta;
    double saldo;

public:
    // construtor
    ContaBancaria(std::string numero) : numeroConta(numero), saldo(0.0) {}

    // getter pega o saldo
    double getSaldo() const {
        return saldo;
    }

    std::string getNumeroConta() const {
        return numeroConta;
    }

    // deposito
    void depositar(double valor) {
        if (valor > 0) {
            saldo += valor;
            std::cout << "Deposito de R$ " << valor << " realizado com sucesso.\n";
        } else {
            std::cout << "O valor do deposito deve ser positivo.\n";
        }
    }

    // saque
    void sacar(double valor) {
        if (valor <= 0) {
            std::cout << "O valor do saque deve ser positivo\n";
        } else if (valor > saldo) {
            std::cout << "Saldo insuficiente para realizar o saque\n";
        } else {
            saldo -= valor;
            std::cout << "Saque realizado com sucesso.\n";
        }
    }
};

int main() {
    ContaBancaria conta("12345-6");

    conta.depositar(500.0);
    std::cout << "Saldo atual: R$ " << conta.getSaldo() << "\n";

    conta.sacar(200.0);
    std::cout << "Saldo atual: R$ " << conta.getSaldo() << "\n";


    return 0;
}