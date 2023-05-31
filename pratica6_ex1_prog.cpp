#include <iostream>
#include <string>
#include <fstream>

int main() {
  int numero, i;
  std::string texto;
  std::cout << "Digite o nome de um arquivo: ";
  std::cin >> texto;
  std::fstream arq;
  arq.open(texto, std::fstream::in);
  if(!arq.is_open()){
    std::cout << "Arquivo nÃ£o abre" << std::endl;
    return 1;
  }
  arq >> i, numero = i;
  while(arq >> i){
    if(numero < i){
      numero = i;
    }
  }
  std::cout << "O maior numero eh: " << numero;
  return 0;
}