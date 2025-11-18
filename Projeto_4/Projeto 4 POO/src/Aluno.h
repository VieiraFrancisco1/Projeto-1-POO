#ifndef ALUNO_H
#define ALUNO_H

#include <string>
#include <vector>
#include "Disciplina.h"

class Aluno {
private:
    // Dados básicos do aluno
    std::string nome;
    std::string matricula;
    std::string curso;

    // Cada aluno pode ter várias disciplinas associadas
    std::vector<Disciplina> listaDisciplinas;

public:
    Aluno();
    Aluno(const std::string& nome, const std::string& matricula, const std::string& curso);

    // Mostra informações principais do aluno
    void exibirInformacoes() const;

    // Adiciona uma disciplina no vetor
    void adicionarDisciplina(const Disciplina& d);

    // Lista todas as disciplinas do aluno com a situação (AP/REP)
    void listarDisciplinas() const;
};

#endif // ALUNO_H
