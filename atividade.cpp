#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

/* Calcule a soma de todos números ímpares entre 1 e 100.
 * Crie um jogo simples: o programa define um número secreto entre 1 e 10 e o usuário deve adivinhar. Dê dicas se o número é maior ou menor.
 * Mostre todos os números pares de 1 a 50 usando um laço for.*/
 
 1 /*int main(){
     int num;
     for(int num = 0; num <= 101; num++){
         nums++;
         cout << nums << endl;
     }
 }*/
 
 2 /*/ int main() {
     srand(time(0));
     int numerosecreto = rand() % 10 + 1;
     int palpite;
     
     cout << "adivinhe um numero secreto de 1 a 10" << endl;
     
     while (true){
         cin >> palpite;
         
         if (palpite == numerosecreto){
             cout << "parabéns, você conseguiu" << endl;
             break;
         }else {
             cout << "tentar novamente" << endl;
         }
     }
 }*/
 
 
 
3 /*int main() {
    for (int i = 2; i <= 50; i++) {
       if (i % 2 == 0){
           cout << i << "";
      
      }
       
    }
    cout << endl;
    return 0;
}*/
