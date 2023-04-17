#include <iostream>
using namespace std;

int main()
{
	float ano, distancia, consumo;
    string nome;
    cin >> nome;
    cin >> ano;	
	cin >> distancia;
	cin >> consumo;

	cout << "Quilômetros por litro: " << (distancia/consumo);
}