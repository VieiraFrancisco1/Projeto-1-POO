#include <iostream>
#include "Aluno.h"
#include "Disciplina.h"

int main() {
    // Criando aluno
    Aluno aluno("Carlos Henrique", "202311987", "Análise e Desenvolvimento de Sistemas");

    // Criando disciplinas
    Disciplina logica("Lógica de Programação", 60);
    Disciplina poo("Programação Orientada a Objetos", 75);

    // Colocando notas nas disciplinas
    logica.setNota(8.0f);
    poo.setNota(5.5f);

    // Ligando disciplinas ao aluno
    aluno.adicionarDisciplina(logica);
    aluno.adicionarDisciplina(poo);

    std::cout << "=== Informações do Aluno ===" << std::endl;

    // Exibindo dados principais do aluno
    aluno.exibirInformacoes();

    // Mostrando disciplinas com situação (aprovado/reprovado)
    aluno.listarDisciplinas();

    return 0;
}
