#include <iostream>
using namespace std;

int main() {
    int n, cont_pares = 0, soma_impares = 0;
    cin >> n;

    int valores[n];
    for (int i = 0; i < n; i++) {
        cin >> valores[i];
    }

    for (int i = 0; i < n; i++) {
        if (valores[i] % 2 == 0) {
            cont_pares++;
        }
        else {
            soma_impares += valores[i];
        }
    }

    cout << "Quantidade de pares: " << cont_pares << endl;
    cout << "Soma dos ímpares: " << soma_impares << endl;
    return 0;
}