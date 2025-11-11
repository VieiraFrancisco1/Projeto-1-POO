#include <iostream>
#include <vector>
#include <limits>   // para numeric_limits
#include "Pessoa.h"

using namespace std;

int main() {
    vector<Pessoa> pessoas;
    int quantidade;

    cout << "Quantas pessoas deseja cadastrar? ";
    if (!(cin >> quantidade)) {
        cout << "Entrada inválida." << endl;
        return 1;
    }
    // limpa todo o resto da linha do buffer (mais seguro que cin.ignore();)
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int i = 0; i < quantidade; ++i) {
        string nome, telefone;

        cout << "\nCadastro da pessoa " << i + 1 << endl;
        cout << "Nome: ";
        getline(cin, nome);

        cout << "Telefone: ";
        getline(cin, telefone);

        pessoas.emplace_back(nome, telefone);
    }

    cout << "\nLista de pessoas cadastradas:\n";
    for (const auto& p : pessoas) {
        p.imprimirNome();
        p.imprimirTelefone();
        cout << "--------------------------" << endl;
    }

    cout << "\nFim do programa.\n";
    return 0;
}
