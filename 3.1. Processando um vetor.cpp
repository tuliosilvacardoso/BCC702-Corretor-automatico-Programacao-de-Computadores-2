#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];

    // ler elementos do vetor
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // encontrar menor elemento
    int min_index = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[min_index]) {
            min_index = i;
        }
    }

    // trocar menor elemento com primeiro elemento
    swap(arr[min_index], arr[0]);

    // imprimir vetor resultante
    for (int i = 0; i < n; i++) {
        cout << arr[i] << "  ";
    }

    return 0;
}