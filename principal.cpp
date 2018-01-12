#include "cadastro.h"
#include "menu.h"
#include <iostream>
#include <cstdlib>

int main(int argc, char const *argv[]) {

  Cadastro cad;
  menu Menu;
  int a, b, esc;
  a = 1;
  b = 0;

  while (a > b) {
    Menu.men();
    std::cin >> esc;

    switch (esc) {
    case 2:
      cad.cadast();
      break;
    case 4:
      a = b;
      break;
    }
  }

  return 0;
}
