#include <iostream>

class Elevador {
private:
    int andar_atual;
    int total_andares;
    int capacidade;
    int pessoas_presentes;

public:
    Elevador(int capacidade, int total_andares) {
        andar_atual = 0;
        pessoas_presentes = 0;
        this->capacidade = capacidade;
        this->total_andares = total_andares;
    }

    bool entra() {
        if (pessoas_presentes < capacidade) {
            pessoas_presentes++;
            return true;
        }
        return false;
    }

    bool sai() {
        if (pessoas_presentes > 0) {
            pessoas_presentes--;
            return true;
        }
        return false;
    }

    bool sobe() {
        if (andar_atual < total_andares) {
            andar_atual++;
            return true;
        }
        return false;
    }

    bool desce() {
        if (andar_atual > 0) {
            andar_atual--;
            return true;
        }
        return false;
    }

    int getAndarAtual() {
        return andar_atual;
    }

    int getTotalAndares() {
        return total_andares;
    }

    int getCapacidade() {
        return capacidade;
    }

    int getPessoasPresentes() {
        return pessoas_presentes;
    }

    void exibe() {
        std::cout << "Andar atual: " << andar_atual << std::endl;
        std::cout << "Total de andares: " << total_andares << std::endl;
        std::cout << "Capacidade do elevador: " << capacidade << std::endl;
        std::cout << "Pessoas presentes: " << pessoas_presentes << std::endl;
    }
};

int main() {
    int capacidade, total_andares, opcao;
    std::cout << "SIMULAÇÃO DO ELEVADOR" << std::endl;
    std::cout << "----------------------------------------------------------------" << std::endl;
    std::cout << "Número de andares: ";
    std::cin >> total_andares;
    std::cout << "Capacidade do elevador: ";
    std::cin >> capacidade;
    Elevador elevador(capacidade, total_andares);

    do {
        std::cout << "----------------------------------------------------------------" << std::endl;
        std::cout << "[" << elevador.getTotalAndares() << " andares, " << elevador.getCapacidade() << " pessoas] andar " << elevador.getAndarAtual() << " com " << elevador.getPessoasPresentes() << " pessoas" << std::endl;
        std::cout << "Escolha uma opção: 1.entra 2.sai 3.sobe 4.desce 5.termina  => ";
        std::cin >> opcao;


        switch(opcao) {
            case 1:
                if (elevador.entra()) {
                } else {
                    std::cout << "lotado!\n";
                }
                break;
            case 2:
                if (elevador.sai()) {
                } else {
                    std::cout << "vazio!\n";
                }
                break;
            case 3:
                if (elevador.sobe()) {
            } else {
                std::cout << "último andar!\n";
            }
            break;
        case 4:
            if (elevador.desce()) {
            } else {
                  std::cout << "térreo!\n";
            }
            break;
        case 5:
            break;
        default:
            std::cout << "Opção inválida.\n";
    }
} while(opcao != 5);

return 0;}