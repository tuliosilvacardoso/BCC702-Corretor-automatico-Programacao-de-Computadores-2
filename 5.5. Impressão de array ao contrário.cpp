#include <iostream>
using namespace std;

int main()
{

    int tamanho;
    cin >> tamanho; 
    int vet[tamanho];

    for (int t = 0; t < tamanho; t++) 
    {
        cin >> vet[t];
    }

    for (int f = tamanho - 1; f >= 0; f--)
    {
        cout << vet[f] << " ";
    }
}
