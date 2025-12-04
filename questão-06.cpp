#include <iostream>
using namespace std;

int main() {
	int numeros[8], maior, menor, posMaior, posMenor;
	for (int i = 0; i < 8; i++) cin >> numeros[i];

	maior = menor = numeros[0];
	posMaior = posMenor = 0;

	for (int i = 1; i < 8; i++) {
    	if (numeros[i] > maior) { maior = numeros[i]; posMaior = i; }
    	if (numeros[i] < menor) { menor = numeros[i]; posMenor = i; }
	}

	cout << "Maior: " << maior << " na posição " << posMaior + 1 << endl;
	cout << "Menor: " << menor << " na posição " << posMenor + 1 << endl;
	return 0;
}
