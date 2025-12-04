#include <iostream>
using namespace std;

int main() {
    int n [5];
    int soma = 0;

    cout << "digite 5 numeros:\n";
    for(int i = 0; i < 5; i++){
        cin >> n [i];
        soma += n [i];
    }

    double media = soma / 5.0;

    cout << "soma = " << soma << endl;
    cout << "media = " << media << endl;

    return 0;
}
