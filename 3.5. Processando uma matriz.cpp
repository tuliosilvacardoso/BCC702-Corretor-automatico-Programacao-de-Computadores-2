#include <iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    cout << "";
    int matriz[m][n];


    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) { 
            cin >> matriz[i][j];
        }
    }

    int maior = matriz[0][0]; 
    int coluna_maior = 0; 

 
      for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
                coluna_maior = j;
            }
        }
    }

    int soma = 0;


    for (int i = 0; i < m; i++) {
        soma += matriz[i][coluna_maior];
    }

    cout << "Soma = " << soma << endl;

    return 0;
}