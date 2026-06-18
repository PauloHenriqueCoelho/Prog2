#include <iostream>
#include <list>

void exibirLista(const std::list<int>& lista) {
    std::cout << "Lista atual: [ ";
    for (int item : lista) {
        std::cout << item << " ";
    }
    std::cout << "]\n";
}

int main() {
    std::list<int> minhaLista;
    
    // insercao
    minhaLista.push_back(10);  //coloca no fim
    minhaLista.push_back(20);  //coloca no fim
    minhaLista.push_front(5);  //coloca no comeco
    minhaLista.push_front(1);  //coloca no comeco
    
    exibirLista(minhaLista);
    std::cout << "Tamanho da lista: " << minhaLista.size() << "\n\n";

    std::cout << "Removendo o valor 10" << std::endl;
    minhaLista.remove(10); 
    
    exibirLista(minhaLista);
    std::cout << "Tamanho da lista: " << minhaLista.size() << std::endl;

    return 0;
}