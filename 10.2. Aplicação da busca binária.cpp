#include <iostream>
#include <vector>

using namespace std;

int buscaBinaria(vector<int> vetor, int valor) {
    int inicio = 0;
    int fim = vetor.size() - 1;

    while (inicio <= fim) {
        int meio = (inicio + fim) / 2;

        if (vetor[meio] == valor) {
            return meio;
        } else if (vetor[meio] < valor) {
            inicio = meio + 1;
        } else {
            fim = meio - 1;
        }
    }

    return -1;
}

int main() {
    int n, valor;
    vector<int> vetor;

    cin >> n;

    for (int i = 0; i < n; i++) {
        int elemento;
        cin >> elemento;
        vetor.push_back(elemento);
    }

    cin >> valor;

    int posicao = buscaBinaria(vetor, valor);

    if (posicao == -1) {
        cout << "Posição do elemento procurado: -1" << endl;
    } else {
        cout << "Posição do elemento procurado: " << posicao << endl;
    }

    return 0;
}
