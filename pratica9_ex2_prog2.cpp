#include<iostream>
#include<set>
using std::cout;
using std::cin;
using std::cin;
int main() {
int num=0,cod=0,v=0,cod2=0,i,ope,cont=0,tam=0,val=0;
std::set<int>s ;
cout<<"Digite um número: ";
cin>>num;
cout<<"Digite "<< num <<" inteiros: ";
while(v<num){v++;
cin>>cod;
s.insert(cod);  
}
tam=s.size();
cout<<tam;
}