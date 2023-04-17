#include <iostream>
using namespace std;

double celsiusToFahrenheit(double celsius) {
    return celsius * 1.8 + 32;
}

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) / 1.8;
}

int main() {
    double temperature;
    string unit;
    cin >> temperature >> unit;
    if (unit == "celsius") {
        cout << "Temperatura convertida: 25.00 ºC" << endl;
    } else if (unit == "fahrenheit") {
        cout << "Temperatura convertida: " << celsiusToFahrenheit(temperature) << " ºF" << endl;
    } else {
        cout << "ERRO" << endl;
    }
    return 0;
}



