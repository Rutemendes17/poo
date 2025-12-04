#include <iostream>
using namespace std;

int main() {
	int numeros[10], x, pos = -1;
	for (int i = 0; i < 10; i++) cin >> numeros[i];
	cin >> x;

	for (int i = 0; i < 10; i++) {
    	if (numeros[i] == x) { pos = i; break; }
	}

	if (pos != -1) cout << "Número " << x << " na posição " << pos + 1 << endl;
	else cout << "Número não encontrado" << endl;

	return 0;
}
