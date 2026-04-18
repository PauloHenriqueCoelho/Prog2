//
// Created by Paulo Henrique Goncalves Coelho on 17/04/26.
//

#include <iostream>

using namespace std;

struct Data {
    int dia;
    int mes;
    int ano;
};

int main() {
    Data data;

    cout << "Informe o data no formato DD MM AAAA: (separe por espaços)" << endl;
    cin >>  data.dia >> data.mes >> data.ano;

    cout << "Data informada: " << data.dia << "/" << data.mes << "/" << data.ano << endl;

    return 0;
}