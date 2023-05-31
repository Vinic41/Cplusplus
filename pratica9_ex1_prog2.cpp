#include <unordered_map>
#include<iostream>
#include<string>
using std::string;
using std::cout;
using std::cin;
using std::cin;
int main() {
int num=0,cod=0,v=0,cod2=0,i;
string nome;
std::unordered_map<int,string>s ;
cout<<"Digite um número: ";
cin>>num;
while(v<num){v++;
 cout<<"Nome e codigo: ";
cin>>nome;
cin>>cod;
s.insert({cod,nome});   
}
cout << "Codigo: ";
cin>>cod2 ;
cout<< s[cod2];
}