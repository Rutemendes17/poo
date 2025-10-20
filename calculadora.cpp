#include <iostream>
#include <string>

using namespace std;
// if, while, do while, for;

int soma(double n1, double n2) {
        double resultado = n1 + n2;
        return resultado;
}
int subtracao(double n1, double n2) {
        double resultado = n1 - n2;
        return resultado;
}
int multiplicacao(double n1, double n2) {
        double resultado = n1 * n2;
        return resultado;
}
int divisao(double n1, double n2) {
        double resultado = n1 / n2;
        return resultado;
}
double resto(int n1, int n2) {
        double resultado = n1 % n2;
        return resultado;
}

int main() {
        double n1, n2;
        char operacao;
        while (true) {
                cout << "===== BEM-VINDO(A) CALCULADORA =====" << endl;
                cout << "Selecione uma operação: " << endl;
                cout << "[ + ] Adição" << endl;
                cout << "[ - ] Substração" << endl;
                cout << "[ * ] Multiplicação" << endl;
                cout << "[ / ] Divisão" << endl;

                cin >> operacao; 

                cout << "Digite o n1 e o n2: " << endl;
                cin >> n1;
                cin >> n2;

                if (operacao == '+'){
                        cout << "=== RESULTADO: " << soma(n1, n2) << endl;
                } else if (operacao == '-') {
                        cout << "=== RESULTADO: " << subtracao(n1, n2) << endl;
                } else if (operacao == '*'){
                        cout << "Multiplicação: " << multiplicacao(n1, n2) << endl;
                } else if (operacao == '/') {
                        cout << "Divisão: " << divisao(n1, n2) << endl;
                } else if (operacao == '%') {
                        cout << "Resto: " << resto(n1, n2) << endl;
                } else {
                        cout << "! Digite uma operação válida.";
                }
                cout << "        " << endl;
                return 0;        

        }
}
