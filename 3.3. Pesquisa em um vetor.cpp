#include <iostream>
using namespace std;

int main() {
    int n, search, found = -1;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cin >> search;
    for (int i = 0; i < n; i++) {
        if (arr[i] == search) {
            found = i;
            break;
        }
    }

    cout << "Posição do elemento " << search << ": "<< found << endl;
    return 0;
}