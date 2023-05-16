#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class JogoAdivinhacao {
private:
    int numeroSecreto;
    int tentativas;

public:
    JogoAdivinhacao() {
        srand(time(0)); // Inicializa a semente para geração de números aleatórios
        numeroSecreto = rand() % 100 + 1; // Gera um número aleatório entre 1 e 100
        tentativas = 0; // Inicializa o contador de tentativas
    }

    void jogar() {
        int palpite;
        do {
            cout << "Digite um número de 1 a 100: ";
            cin >> palpite;
            tentativas++;

            if (palpite > numeroSecreto) {
                cout << "Muito alto! O número é menor! Tente de novo." << endl;
            } else if (palpite < numeroSecreto) {
                cout << "Muito baixo! O número é maior! Tente de novo." << endl;
            } else {
                cout << "Parabéns! Está correto! Você acertou em " << tentativas << " tentativas." << endl;
            }

        } while (palpite != numeroSecreto);
    }
};

int main() {
    JogoAdivinhacao jogo;
    jogo.jogar();
    return 0;
}
