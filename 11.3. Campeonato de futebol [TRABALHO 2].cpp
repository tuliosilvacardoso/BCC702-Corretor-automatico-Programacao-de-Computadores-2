#include <iostream>
#include <iomanip>  // Inclui a biblioteca iomanip para usar setw
#include <vector>

using namespace std;

class Equipe
{
public:
    string nome;
    int pontuacao;
};

int main()
{
    int algo = 0;
    int tam = 0;
    // select ou insect
    cin >> algo;
    // tamanho vetor
    cin >> tam;

    vector<Equipe> v;
    Equipe aux;

    for (int i = 0; i < tam; i++)
    {
        cin >> aux.nome;
        cin >> aux.pontuacao;
        v.push_back(aux);
    }

    if (algo == 1)
    {
        int min;
        Equipe aux1;
        for (int i = 0; i < tam; i++)
        {
            min = i;
            for (int j = i + 1; j < tam; j++)
            {
                if (v[j].pontuacao > v[min].pontuacao)
                    min = j;
            }
            aux1 = v[i];
            v[i] = v[min];
            v[min] = aux1;
        }
    }
    else if (algo == 2)
    {
        int j;
        Equipe aux2;
        for (int i = 1; i < tam; i++)
        {
            aux2 = v[i];
            j = i - 1;
            while (j >= 0 && v[j].pontuacao < aux2.pontuacao)
            {
                v[j + 1] = v[j];
                j = j - 1;
            }
            v[j + 1] = aux2;
        }
    }

    // Define o tamanho dos campos de saída para justificar a formatação
    const int TAM_NOME = 15;
    const int TAM_PONTUACAO = 5;

    // Imprime a tabela de equipes ordenada
    for (int i = 0; i < tam; i++)
    {
        cout << left << setw(TAM_NOME) << v[i].nome << setw(TAM_PONTUACAO) << v[i].pontuacao << "\n";
    }
}
