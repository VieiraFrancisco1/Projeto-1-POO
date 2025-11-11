#include "Pessoa.h"
#include <iostream>

using namespace std;

// construtor padrão
Pessoa::Pessoa() : nome(""), telefone("") {}

// construtor com parâmetros (lista de inicialização)
Pessoa::Pessoa(const string& nome, const string& telefone)
    : nome(nome), telefone(telefone) {}

// destrutor
Pessoa::~Pessoa() {
    cout << "Objeto Pessoa destruído: " << nome << endl;
}

// imprime o nome
void Pessoa::imprimirNome() const {
    cout << "Nome: " << nome << endl;
}

// imprime o telefone
void Pessoa::imprimirTelefone() const {
    cout << "Telefone: " << telefone << endl;
}
