#include <iostream>
#include <queue>
#include <string>

int main() {
    std::queue<std::string> filaDocumentos;

    filaDocumentos.push("Documento1.pdf");
    filaDocumentos.push("Documento2.docx");
    filaDocumentos.push("Documento3.pdf");

    while (!filaDocumentos.empty()) { // fica no loop enquanto a fila nao for vazia
        std::cout << "Processando: " << filaDocumentos.front() << std::endl;
        
        filaDocumentos.pop(); //remove o elemento
    }

    std::cout << "\nTodos os documentos foram processados com sucesso" << std::endl;

    return 0;
}