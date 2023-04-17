#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

struct Aluno {
    string nome;
    float nota1;
    float nota2;
    float media;
};

int main() {
    int quantidade_alunos = 0;
    float maior_media = 0;
    string nome_arquivo = "alunos.txt";
    Aluno aluno_com_maior_media, aluno;

    // Abre o arquivo para leitura
    ifstream arquivo(nome_arquivo);

    // Lê cada linha do arquivo e atualiza o aluno com a maior média
    string linha;
    while (getline(arquivo, linha)) {
        // Converte a linha em um stringstream para separar os dados do aluno
        stringstream ss(linha);

        // Lê os dados do aluno da linha
        ss >> aluno.nome >> aluno.nota1 >> aluno.nota2 >> aluno.media;

        // Atualiza a variável "aluno_com_maior_media" se o aluno atual tem maior média
        if (aluno.media > maior_media) {
            maior_media = aluno.media;
            aluno_com_maior_media = aluno;
        }

        // Incrementa a quantidade de alunos lidos
        quantidade_alunos++;
    }

    // Fecha o arquivo
    arquivo.close();

    // Imprime os dados do aluno com a maior média
    cout << aluno_com_maior_media.nome << " " << aluno_com_maior_media.nota1 << " " << aluno_com_maior_media.nota2 << " " << aluno_com_maior_media.media << endl;

    return 0;
}
