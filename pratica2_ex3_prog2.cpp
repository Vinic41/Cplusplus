#include <iostream>

using namespace std;

int main()
{

    int a, b;
    cout << "Insira dois números inteiros: ";
    cin >> a >> b;

    int mdc = 1;
    for (int i = 2; i <= a && i <= b; i++)
    {

        if (a % i == 0 && b % i == 0)
        {
            mdc = i;
        }
    }

    int mmc = a * b / mdc;

    cout << "O máximo divisor comum é " << mdc << " e o mínimo múltiplo comum é " << mmc << "." << endl;

    return 0;
}
