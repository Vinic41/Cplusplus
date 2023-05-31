#include <iostream> //importação de bibliotecas
#include <cmath>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;

int main(){
    std::string frase = "", inversa;
    cout << "Digite uma frase: ";
    std::getline(cin, frase);
    for(int i = frase.length(); i >= 0; i = i - 1){
        inversa.push_back(frase[i]);
    }
    cout << inversa;
}
