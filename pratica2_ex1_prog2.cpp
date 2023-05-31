#include <iostream> //importação de bibliotecas
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

int main(){
    int val1,i = 0;
    cout << "Digite um valor: ";
    cin >> val1;
    if (val1>=0){
        while (i<val1){
            if (val1%2==0){
                cout<< (i*2)<< " " ;
            }
            i++;
            
        }

    }else{
        cout<< "Erro";
    }
}
   

