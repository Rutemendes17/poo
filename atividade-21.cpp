#include <iostream>
#include <string>


  class animal {
      public:
      std::string nome;
      std::string raça;
      int idade;
      
  };
int main()
{
   animal cachorro;
   cachorro.nome = "Spike";
   cachorro.raça = "pinscher" ;
   cachorro.idade = 3;
   
   std::cout << "nome do cachorro é: " << cachorro.nome;
}

