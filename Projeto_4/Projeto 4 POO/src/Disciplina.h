#ifndef DISCIPLINA_H
#define DISCIPLINA_H

#include <string>

class Disciplina {
private:
    // Dados da disciplina
    std::string nome;
    int cargaHoraria;
    float nota;

public:
    Disciplina();
    Disciplina(const std::string& nome, int cargaHoraria, float nota = 0.0f);

    // Atualiza a nota do aluno nessa disciplina
    void setNota(float n);

    // Retorna a nota para consultas
    float getNota() const;

    // Apenas retorna nome e CH, só para exibição
    const std::string& getNome() const;
    int getCargaHoraria() const;

    // Função amiga: pode acessar 'nota' diretamente e decidir se o aluno passou
    friend bool verificarAprovacao(const Disciplina& d);
};

#endif // DISCIPLINA_H
