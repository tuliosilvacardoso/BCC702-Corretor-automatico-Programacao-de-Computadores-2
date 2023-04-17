#include <iostream>
#include <cmath>

using namespace std;

int raizes(double a, double b, double c, double *x1, double *x2) {
  double delta = b*b - 4*a*c;
  if (delta < 0) {
    return 0;
  } else if (delta == 0) {
    *x1 = -b / (2 * a);
    return 1;
  } else {
    double sqrt_delta = sqrt(delta);
    *x1 = (-b + sqrt_delta) / (2 * a);
    *x2 = (-b - sqrt_delta) / (2 * a);
    return 2;
  }
}

int main() {
  double a, b, c, x1, x2;
  cin >> a >> b >> c;
  int n_raizes = raizes(a, b, c, &x1, &x2);
  if (n_raizes == 0) {
    cout << "0 raízes reais" << endl;
  } else if (n_raizes == 1) {
    cout << "1 raízes reais" << endl << x1 << endl;
  } else {
    cout << "2 raízes reais" << endl << x1 << endl << x2 << endl;
  }
  return 0;
}
