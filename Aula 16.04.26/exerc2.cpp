//
// Created by Paulo Henrique Goncalves Coelho on 17/04/26.
//

#include <iostream>

using namespace std;

int soma(int v1, int v2) {
    return v1 + v2;
}

int main() {
    int v1, v2;
    cout << "Informe o primeiro operante" << endl;
    cin >> v1;
    cout << "Informe o segundo operante" << endl;
    cin >> v2;
    cout << v1 << " + " << v2 << " = " << soma(v1,v2) << endl;

    return 0;
}