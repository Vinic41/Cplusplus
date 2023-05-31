#include <iostream> //importação de bibliotecas

using std::cin;
using std::cout;
using std::endl;

int main()
{
    double ano = 0;
    cout << "Digite sua idade: ";
    cin >> ano;
    cout << "O seu ano de nascimento é : " << (2022 - ano);

    return 0;
}
