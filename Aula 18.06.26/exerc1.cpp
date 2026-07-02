#include <iostream>

class MatrizDinamica {
private:
    int** matriz;
    int linhas;
    int colunas;

public:
    // construtor
    MatrizDinamica(int l, int c) : linhas(l), colunas(c) {
        matriz = new int*[linhas];
        for (int i = 0; i < linhas; ++i) {
            matriz[i] = new int[colunas](); // Aloca e inicializa com zero
        }
    }

    // destrutor
    ~MatrizDinamica() {
        for (int i = 0; i < linhas; ++i) {
            delete[] matriz[i]; // libera linha por linha
        }
        delete[] matriz; // libera da memoria o array por si só
    }

    // construtor de copia
    MatrizDinamica(const MatrizDinamica& outra) : linhas(outra.linhas), colunas(outra.colunas) {
        matriz = new int*[linhas];
        for (int i = 0; i < linhas; ++i) {
            matriz[i] = new int[colunas];
            for (int j = 0; j < colunas; ++j) {
                matriz[i][j] = outra.matriz[i][j]; // copia valor por valor
            }
        }
    }

    void set(int l, int c, int valor) { 
        matriz[l][c] = valor; 
    }

    void imprimir() const {
        for (int i = 0; i < linhas; ++i) {
            for (int j = 0; j < colunas; ++j) {
                std::cout << matriz[i][j] << " ";
            }
            std::cout << "\n";
        }
    }
};

int main() {
    MatrizDinamica m1(2, 2);
    m1.set(0, 0, 7);
    m1.set(1, 1, 14);

    std::cout << "matriz original:\n";
    m1.imprimir();

    //aqui comeca a copia profunda
    MatrizDinamica m2 = m1; 
    m2.set(0, 0, 99); // Altera apenas m2

    std::cout << "\nMatriz 1 apos alterar a Matriz 2\n"; // tem q ter o 7 ainda
    m1.imprimir();

    std::cout << "\nmatriz 2 modificada:\n";
    m2.imprimir();

    return 0;
}