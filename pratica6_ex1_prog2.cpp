#include <iostream>
#include <fstream>
#include <string>
 

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::max;



int main() {
    string nome;
    int num=0;
    int max_num = 0;
    

    cout << "Digite o nome do arquivo: ";
    cin >> nome;
    
    std::fstream arqui;
    arqui.open(nome, std::fstream::in);
    if (!arqui.is_open()) {
        cout << "Erro ao abrir o arquivo '" << nome << "'." << endl;
        return 1;
    }

    while (arqui >> num) {
        max_num = max(max_num, num);
    }

    arqui.close();

    cout << "O maior numero no arquivo e: " << max_num << endl;

    return 0;
}