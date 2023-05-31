#include <iostream> //importação de bibliotecas
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int val1, i = 0;
    cout << "Digite um valor: ";
    cin >> val1;
    if (val1 % 2 != 0)
    {
        if (val1 % 3 != 0)
        {
            cout << "O " << val1 << " e primo";
        }
    }
    else
    {
        cout << "Nao e primo";
    }
}
