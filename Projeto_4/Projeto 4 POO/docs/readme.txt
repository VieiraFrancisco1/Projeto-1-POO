Projeto Avaliativo 4 – Gerenciamento de Notas de Alunos

Este trabalho tem como objetivo colocar em prática os conteúdos de Programação Orientada a Objetos em C++. A ideia foi montar um sistema simples para gerenciar notas de um aluno, usando os conceitos de modularização, encapsulamento e função amiga.

O programa cria um aluno, cadastra disciplinas, registra notas e depois mostra se o aluno foi aprovado ou reprovado em cada disciplina. O critério é bem direto: quem tira 6.0 ou mais está aprovado.


Estrutura do Projeto
--------------------
O código foi dividido em arquivos para organizar melhor:

• Aluno.h / Aluno.cpp → classe responsável pelos dados do aluno
• Disciplina.h / Disciplina.cpp → classe responsável pelas disciplinas + função amiga
• main.cpp → parte principal do programa onde tudo é colocado em prática

Classe Aluno
------------
Guarda informações básicas do aluno (nome, matrícula e curso) e uma lista de disciplinas que ele está cursando. A classe também possui funções para mostrar os dados do aluno e listar as disciplinas com as notas e se passou ou não.

Classe Disciplina
-----------------
Guarda o nome da disciplina, a carga horária e a nota. Também possui funções para configurar e recuperar a nota.

Função Amiga
------------
A função amiga verificarAprovacao permite acessar diretamente a nota da disciplina para identificar se o aluno foi aprovado. Foi usada exatamente para treinar esse tipo de recurso em C++.


Como compilar e executar
------------------------
Se os arquivos estiverem todos na mesma pasta:

    g++ -std=c++17 Aluno.cpp Disciplina.cpp main.cpp -o projeto4
    ./projeto4

Se houver uma pasta "src" e uma pasta "bin":

    mkdir -p bin
    g++ -std=c++17 src/*.cpp -o bin/projeto4
    ./bin/projeto4


O que o programa faz
--------------------
✓ Cria um aluno
✓ Cadastra no mínimo duas disciplinas
✓ Define as notas das disciplinas
✓ Conecta as disciplinas ao aluno
✓ Mostra os dados do aluno
✓ Mostra as disciplinas com notas e resultado final (Aprovado / Reprovado)
✓ Utiliza a função amiga para identificar aprovação


Critério de aprovação
---------------------
    Nota maior ou igual a 6.0 → Aprovado
    Nota menor que 6.0        → Reprovado


UML (resumo em palavras)
------------------------
O UML do projeto mostra duas classes (Aluno e Disciplina), seus atributos e métodos. Também aparece a relação entre elas (um aluno pode cursar várias disciplinas) e a função amiga usada para verificar a aprovação.


Considerações finais
--------------------
O código foi desenvolvido com foco em aplicar os conceitos que aprendemos na disciplina:

• Encapsulamento
• Modularização
• Associação entre classes
• Funções amigas (friend)


