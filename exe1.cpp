#include <iostream>
#include <string>

using namespace std;

struct Atleta {
    string nome;
    string posicao;
    int idade;
    float altura;
};

int main() {
    Atleta atletas[5];

    // Lê os dados dos atletas
    for (int i = 0; i < 5; i++) {
        cout << "Digite o nome do atleta " << i + 1 << ": ";
        getline(cin, atletas[i].nome);

        cout << "Digite a posição do atleta " << i + 1 << ": ";
        getline(cin, atletas[i].posicao);

        cout << "Digite a idade do atleta " << i + 1 << ": ";
        cin >> atletas[i].idade;

        cout << "Digite a altura do atleta " << i + 1 << ": ";
        cin >> atletas[i].altura;

        // Limpa o buffer do teclado para a próxima iteração do loop
        cin.ignore();
    }

    // Encontra o atleta mais alto
    Atleta maisAlto = atletas[0];
    for (int i = 1; i < 5; i++) {
        if (atletas[i].altura > maisAlto.altura) {
            maisAlto = atletas[i];
        }
    }

    // Encontra o atleta mais velho
    Atleta maisVelho = atletas[0];
    for (int i = 1; i < 5; i++) {
        if (atletas[i].idade > maisVelho.idade) {
            maisVelho = atletas[i];
        }
    }

    // Exibe os resultados
    cout << "O atleta mais alto é: " << maisAlto.nome << endl;
    cout << "O atleta mais velho é: " << maisVelho.nome << endl;

    return 0;
}