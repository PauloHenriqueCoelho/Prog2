#include <iostream>
#include <memory>

int main() {
    auto ptr = std::make_unique<int>(67);

    std::cout << "valor do ponteiro inteligente: " << *ptr << std::endl;

    return 0;
}
