#include <iostream>
using namespace std;

bool busca_binaria(int v[], int n, int procurado) {
    int esq = 0;
    int dir = n - 1;
    int meio;
    int elementos_descartados;
    int iteracao = 1;

    while (esq <= dir) {
        meio = (esq + dir) / 2;
        elementos_descartados = meio - esq;

        cout << "iteração " << iteracao << ": " << 1 + elementos_descartados << " descartados" << endl;

        if (v[meio] == procurado) {
            return true;
        }
        else if (v[meio] > procurado) {
            dir = meio - 1;
        }
        else {
            esq = meio + 1;
        }

        iteracao++;
    }

    return false;
}

int main() {
    int n;
    cin >> n;
    int vet[n];
    for (int i = 0; i < n; i++)
        cin >> vet[i];
    int x;
    cin >> x;
    if (busca_binaria(vet, n, x)) {
        cout << "encontrado" << endl;
    }
    else {
        cout << "não encontrado" << endl;
    }
    return 0;
}
