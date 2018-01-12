#include <fstream>
#include <iostream>

using namespace std;

string nomeproduto[35000];
float valorproduto[35000];

class Cadastro {
public:
  void cadast() {
    ofstream arq;
    arq.open("Cadastro.txt", ios::app);
    char esc;
    int k = 0;

   //loop de cadastro dos produtos
    while(k != -1){
      std::cout << "Cadastrar novo produto ? s/n : " ;
      std::cin >> esc;
      std::cout << '\n';

      switch (esc) {
      case 's':
        std::cout << "Nome do produto : ";
        std::cin >> nomeproduto[k];
        std::cout << '\n';
        arq << "Produto : " << nomeproduto[k];

        std::cout << "Valor do produto : ";
        std::cin >> valorproduto[k];
        std::cout << '\n';
        arq << "valor : " << valorproduto[k];

        k++;
        break;

      case 'n':
        k = -1;
        break;
      }
    }

    arq.close();
  }
};
