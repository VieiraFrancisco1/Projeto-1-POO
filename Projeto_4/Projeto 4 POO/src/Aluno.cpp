#include "Aluno.h"
#include <iostream>
#include <iomanip>

Aluno::Aluno() : nome(""), matricula(""), curso("") {}

Aluno::Aluno(const std::string& nome, const std::string& matricula, const std::string& curso)
    : nome(nome), matricula(matricula), curso(curso) {}

// Exibe os dados básicos do aluno na tela
void Aluno::exibirInformacoes() const {
    std::cout << "Nome do aluno: " << nome << std::endl;
    std::cout << "Matrícula: " << matricula << std::endl;
    std::cout << "Curso: " << curso << std::endl;
}

// Guarda uma disciplina no vetor do aluno
void Aluno::adicionarDisciplina(const Disciplina& d) {
    listaDisciplinas.push_back(d);
}

// Percorre as disciplinas e mostra o nome, nota e se foi aprovado
void Aluno::listarDisciplinas() const {
    if (listaDisciplinas.empty()) {
        std::cout << "Nenhuma disciplina cadastrada ainda." << std::endl;
        return;
    }

    std::cout << "\nDisciplinas cursadas e situação:\n";
    for (const auto& d : listaDisciplinas) {
        std::cout << "- " << d.getNome()
                  << " (CH: " << d.getCargaHoraria() << ") | Nota: "
                  << std::fixed << std::setprecision(1) << d.getNota()
                  << " → " << (verificarAprovacao(d) ? "Aprovado" : "Reprovado")
                  << std::endl;
    }
}
