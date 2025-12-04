#include <iostream>
using namespace std;

int main() {
    // Parte 1: Ler 5 numero e mostrar
    int lista1[5];
    for (int indice = 0; indice < 5; indice++) {
        cin >> lista1[indice];
    }
    for (int indice = 0; indice < 5; indice++) {
        cout << lista1[indice] << " ";
    }
    cout << endl;

    // Parte 2: so mostrar numeros pares
    int numerosPares[10];
    cout << "Digite 10 numero, vai mostra so os pares:\n";
    for (int i = 0; i < 10; i++) {
        cin >> numerosPares[i];
    }
    for (int i = 0; i < 10; i++) {
        if (numerosPares[i] % 2 == 0) {
            cout << numerosPares[i] << " ";
        }
    }
    cout << endl;

    // Parte 3: media de notas do aluno
    int notasAluno[4];
    int totalNotas = 0;

    cout << "Informe as 4 notas do alno:\n";
    for (int i = 0; i < 4; i++) {
        cin >> notasAluno[i];
        totalNotas += notasAluno[i];
    }

    double mediaFinal = totalNotas / 4.0;

    if (mediaFinal >= 7.0) {
        cout << "Aluno ta aprovado" << endl;
    } else {
        cout << "Aluno reprovadu" << endl;
    }

    // Parte 4: pegar o maior e o menor numero
    int listaNumeros[6];
    cout << "Digite 6 numero pra ver qual maior e menor:\n";
    for (int i = 0; i < 6; i++) {
        cin >> listaNumeros[i];
    }

    int maiorValor = listaNumeros[0];
    int menorValor = listaNumeros[0];

    for (int i = 1; i < 6; i++) {
        if (listaNumeros[i] > maiorValor) {
            maiorValor = listaNumeros[i];
        }
        if (listaNumeros[i] < menorValor) {
            menorValor = listaNumeros[i];
        }
    }

    cout << "Maior valor foi: " << maiorValor << endl;
    cout << "Menor foi: " << menorValor << endl;

    return 0;
}
