#include <iostream>
#include <list>

using namespace std;

int main() {
    int n, x, soma = 0;
    list<int> numeros;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x;

        if (x == 0) {
            if (!numeros.empty()) {
                numeros.pop_back();
            }
        } else {
            numeros.push_back(x);
        }
    }

    for (int num : numeros) {
        soma += num;
    }

    cout << soma << endl;

    return 0;
}

