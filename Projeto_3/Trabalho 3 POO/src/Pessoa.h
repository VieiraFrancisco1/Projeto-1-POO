#ifndef PESSOA_H
#define PESSOA_H

#include <string>

// Declaração da classe Pessoa
class Pessoa {
private:
    std::string nome;
    std::string telefone;

public:
    Pessoa(); // construtor padrão
    Pessoa(const std::string& nome, const std::string& telefone); // construtor com parâmetros
    ~Pessoa(); // destrutor

    void imprimirNome() const;
    void imprimirTelefone() const;
};

#endif // PESSOA_H
