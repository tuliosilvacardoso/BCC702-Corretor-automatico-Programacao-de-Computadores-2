#include <cmath>

class Circulo {
public:
    Circulo(double x_, double y_, double r_) : x(x_), y(y_), r(r_) {}
    int posicao(double x_, double y_) {
        double dCP = sqrt(pow(x_ - x, 2) + pow(y_ - y, 2));
        if (dCP == r) return 0;
        else if (dCP > r) return 1;
        else return -1;
    }
    Circulo operator+(const Circulo &c) {
        double newX = x + c.x;
        double newY = y + c.y;
        double newR = r + c.r;
        return Circulo(newX, newY, newR);
    }
private:
    double x, y, r;
};
#include <iostream>

int main() {
    Circulo c1(0, 1, 4);
    Circulo c2(2, 3, 7);
    Circulo c3 = c1 + c2;
    double x, y;
    std::cin >> x >> y;
    int pos = c3.posicao(x, y);
    if (pos == 0) std::cout << "pertence";
    else if (pos == 1) std::cout << "externo";
    else std::cout << "interno";
    return 0;
}
