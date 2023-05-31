#include <iostream>
#include <fstream>
#include <string>
 

using std::cin;
using std::cout;
using std::endl;
using std::string;



int main() {
    string nome,nome2,i;

    cout << "Digite o nome do arquivo de origem: ";
    cin >> nome;
    cout << "Digite o nome do arquivo final: ";
    cin >> nome2;
    
    std::fstream arqui;
    std::fstream arqui2;
    arqui.open(nome, std::fstream::in);
    if (!arqui.is_open()) {
        cout << "Erro ao abrir o arquivo '" << nome << "'." << endl;
        return 1;
    }
    arqui2.open(nome2, std::fstream::out);
    while(getline(arqui, i)){
    arqui2 << i;
    }
    std::cout << "Copia realizada!";


    return 0;
}