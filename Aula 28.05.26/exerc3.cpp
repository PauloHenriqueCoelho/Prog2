#include <iostream>

class Termometro {
private:
    double temperaturaCelsius;

public:
    // construtor
    Termometro() : temperaturaCelsius(25.0) {}

    // setter
    void setTemperaturaCelsius(double temp) {
        if (temp >= -273.15) {
            temperaturaCelsius = temp;
        } else {
            std::cerr << "Erro: Temperatura abaixo do zero absoluto (-273.15 C) nao eh permitida!\n";
        }
    }

    // getter celsius
    double getTemperaturaCelsius() const {
        return temperaturaCelsius;
    }

    // getter em farenheit
    double getTemperaturaFahrenheit() const {
        return (temperaturaCelsius * 1.8) + 32.0;
    }
};

int main() {
    Termometro t;

    std::cout << "Temperatura inicial:\n";
    std::cout << "Celsius: " << t.getTemperaturaCelsius() << " C\n";
    std::cout << "Fahrenheit: " << t.getTemperaturaFahrenheit() << " F\n\n";

    t.setTemperaturaCelsius(100.0);
    std::cout << "Nova temperatura (ebulicao):\n";
    std::cout << "Celsius: " << t.getTemperaturaCelsius() << " C\n";
    std::cout << "Fahrenheit: " << t.getTemperaturaFahrenheit() << " F\n\n";


    return 0;
}