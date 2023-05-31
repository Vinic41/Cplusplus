#include <iostream> //importação de bibliotecas
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

int valor_absoluto(int valfun){
    if(valfun<0){
        valfun=valfun * (-1);
        return valfun;
    }else if(valfun>=0){
        return valfun;
    }
}



int main(){
    int val,fun = 0;
    cout << "Digite um valor: ";
    cin >> val;
    cout<<"O valor absoluto e "<<valor_absoluto(val)<<endl;


}