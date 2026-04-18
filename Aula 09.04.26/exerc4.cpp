//
// Created by Paulo Henrique Goncalves Coelho on 17/04/26.
//

#include <iostream>

using namespace std;


int main() {
    float semestre[4];
    int ano[2] = {2025, 2026};
    int gastoTotal = 0;

    for (int i = 0; i < 2; i++) {
        for (int j = 1; j < 3; j++) { // Comecei o laco com 1 para ficar escrito certinho no cout
            cout << "Informe os valores de despesas do: "<< j << " semestre de " << ano[i] << endl;
            cin >> semestre[j] ;
        }
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 1; j < 3; j++) {
            cout << "[ANO:"<< ano[i] << "] [DESPESA: " << semestre[j] << "]" << endl;
            gastoTotal += semestre[j];
        }
    }

    cout << "Gasto total ao longo de dois anos:" << gastoTotal << endl;



    return 0;
}