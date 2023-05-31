#include <iostream> //importação de bibliotecas
#include <cmath>
#include <vector>


using std::cin;
using std::cout;
using std::endl;

int main(){
    int val,num,fun,i,n = 0;
    cout << "Digite um inteiro: ";
    cin >> val;
    std::vector<int> vet1;
    cout << "Informe "<< val << " numeros inteiros: "<< endl;
    while(i<val){
     i++;
     cin >> num;
     vet1.push_back(num+1);  
    }
    while(n<val){
    n++;
    cout<<"Os sucessores são "<< vet1[n] <<endl;
    }
}