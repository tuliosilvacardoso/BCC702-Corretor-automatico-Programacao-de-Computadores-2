#include <iostream>
#include <cmath>

struct Ponto {
  int x, y;
};

double distanciaEuclidiana(Ponto p1, Ponto p2) {
  return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

int main() {
  int N;
  std::cin >> N;

  Ponto *pontos = new Ponto[N];

  for (int i = 0; i < N; i++) {
    std::cin >> pontos[i].x >> pontos[i].y;
  }

  double total = 0;
  for (int i = 0; i < N - 1; i++) {
    total += distanciaEuclidiana(pontos[i], pontos[i + 1]);
  }

  std::cout << "Tamanho do caminho: " << total << std::endl;

  delete[] pontos;

  return 0;
}