#include <iostream>
using namespace std;

float calcularMedia(float n1, float n2, float n3) {
    float media;
    media = (n1 + n2 + n3) / 3;
    return media;
}

int main() {
    string nome[5];
    float n1[5], n2[5], n3[5], media[5];
    int qtd, i, posMaior;
    float maiorMedia;

    cout << "Quantos alunos deseja cadastrar? ";
    cin >> qtd;

    if (qtd < 1 || qtd > 5) {
        cout << "Quantidade invalida." << endl;
    } else {
        for (i = 0; i < qtd; i++) {
            cout << "\nDigite o nome do aluno " << i + 1 << ": ";
            cin >> nome[i];

            cout << "Digite as 3 notas de " << nome[i] << ": ";
            cin >> n1[i] >> n2[i] >> n3[i];

            media[i] = calcularMedia(n1[i], n2[i], n3[i]);
        }

        maiorMedia = media[0];
        posMaior = 0;

        for (i = 1; i < qtd; i++) {
            if (media[i] > maiorMedia) {
                maiorMedia = media[i];
                posMaior = i;
            }
        }

        cout << "\n";
        cout << "ALUNO\tN1\tN2\tN3\tMEDIA\tSITUACAO" << endl;

        for (i = 0; i < qtd; i++) {
            cout << nome[i] << "\t"
                 << n1[i] << "\t"
                 << n2[i] << "\t"
                 << n3[i] << "\t"
                 << media[i] << "\t";

            if (media[i] >= 7) {
                cout << "Aprovado";
            } else {
                cout << "Reprovado";
            }

            cout << endl;
        }

        cout << "\nAluno com maior media: " << nome[posMaior]
             << " (" << media[posMaior] << ")" << endl;
    }

    return 0;
}
