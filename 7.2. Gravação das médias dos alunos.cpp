#include <iostream>
#include <fstream>

using namespace std;

struct Aluno {
    string nome;
    float nota1;
    float nota2;
};

int main() {
    int quantidade_alunos;
    float media;
    string nome_arquivo = "alunos.txt";
    Aluno aluno;

    // Abre o arquivo para escrita
    ofstream arquivo(nome_arquivo);

    // Lê a quantidade de alunos
    cin >> quantidade_alunos;

    // Lê os dados de cada aluno e calcula a média aritmética
    for (int i = 1; i <= quantidade_alunos; i++) {
        cin >> aluno.nome >> aluno.nota1 >> aluno.nota2;

        media = (aluno.nota1 + aluno.nota2) / 2;

        // Escreve os dados do aluno no arquivo
        arquivo << aluno.nome << " ";
        arquivo << aluno.nota1 << " ";
        arquivo << aluno.nota2 << " ";
        arquivo << media << endl;
    }

    // Fecha o arquivo
    arquivo.close();

    return 0;
}
