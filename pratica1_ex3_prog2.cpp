#include <iostream> //importação de bibliotecas
#include <cmath>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int val1, val2, valn = 0;
    double n;
    cout << "Digite o primeiro valor: ";
    cin >> val1;
    cout << "Digite o segundo valor: ";
    cin >> val2;
    cout << "Digite o terceiro valor: ";
    cin >> valn;
    n = (1.0 * valn / (val2 - val1));
    n = round(n);
    cout << n;
    cout << "A soma e : " << ((val1 + valn) * n) / 2;

    return 0;
}
