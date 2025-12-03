#include <iostream>
#include <string>
using namespace std;

int main() {
    string nomes[6];
    string busca;

    cout << "digite 6 nomes:\n";
    for(int i = 0; i < 6; i++){
        cin >> nomes[i];
    }

    cout << "digite um nome para buscar: ";
    cin >> busca;

    bool existe = false;

    for(int i = 0; i < 6; i++){
        if(nomes[i] == busca){
            existe = true;
            break;
        }
    }

    if(existe)
        cout << "o nome existe no vetor.\n";
    else
        cout << "o nome nao existe.\n";

    return 0;
}
