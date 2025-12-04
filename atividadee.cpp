#include <iostream>
#include <cmath>
using namespace std;

// ===== função primo =====
bool ehPrimo(int x) {
    if (x <= 1) return false;

    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) return false;
    }
    return true;
}

int main() {

    int opcao;

    do {
        cout << "\n===== MENU PRINCIPAL =====\n";
        cout << "1 - Par ou Impar\n";
        cout << "2 - Media de notas (-1 para parar)\n";
        cout << "3 - Menu Somar/Subtrair\n";
        cout << "4 - Tabuada\n";
        cout << "5 - Contar digitos\n";
        cout << "6 - Contar primos no intervalo [a,b]\n";
        cout << "7 - Sair\n";
        cout << "Escolha: ";
        cin >> opcao;

        // ======================== 1 =========================
        if (opcao == 1) {
            int n;
            cout << "Digite um numero: ";
            cin >> n;

            if (n % 2 == 0) cout << "Par\n";
            else cout << "Impar\n";
        }

        // ======================== 2 =========================
        else if (opcao == 2) {
            double nota, soma = 0;
            int qtd = 0;

            cout << "Digite notas (use -1 para encerrar):\n";
            while (true) {
                cin >> nota;
                if (nota == -1) break;

                soma += nota;
                qtd++;
            }

            if (qtd == 0) cout << "Nenhuma nota inserida.\n";
            else cout << "Media = " << soma / qtd << endl;
        }

        // ======================== 3 =========================
        else if (opcao == 3) {
            int op2;
            do {
                cout << "\n--- SUBMENU ---\n";
                cout << "1 - Somar\n";
                cout << "2 - Subtrair\n";
                cout << "3 - Voltar\n";
                cin >> op2;

                if (op2 == 1) {
                    int a, b;
                    cout << "Digite dois numeros: ";
                    cin >> a >> b;
                    cout << "Soma = " << a + b << endl;
                }
                else if (op2 == 2) {
                    int a, b;
                    cout << "Digite dois numeros: ";
                    cin >> a >> b;
                    cout << "Subtracao = " << a - b << endl;
                }

            } while (op2 != 3);
        }

        // ======================== 4 =========================
        else if (opcao == 4) {
            int n;
            cout << "Digite um numero para ver a tabuada: ";
            cin >> n;

            for (int i = 1; i <= 10; i++) {
                cout << n << " x " << i << " = " << n * i << endl;
            }
        }

        // ======================== 5 =========================
        else if (opcao == 5) {
            int n;
            cout << "Digite um inteiro: ";
            cin >> n;

            n = abs(n);

            if (n == 0) {
                cout << "1 digito\n";
            } else {
                int cont = 0;
                while (n > 0) {
                    n /= 10;
                    cont++;
                }
                cout << cont << " digitos\n";
            }
        }

        // ======================== 6 =========================
        else if (opcao == 6) {
            int a, b;
            cout << "Digite o intervalo [a b]: ";
            cin >> a >> b;

            int cont = 0;
            for (int i = a; i <= b; i++) {
                if (ehPrimo(i)) cont++;
            }

            cout << "Quantidade de primos = " << cont << endl;
        }

    } while (opcao != 7);

    cout << "Programa encerrado.\n";
    return 0;
}
