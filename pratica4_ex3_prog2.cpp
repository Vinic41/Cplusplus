#include <iostream> //importação de bibliotecas
#include <cmath>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;

int main(){
   
    int minu=0,maiu=0,num=0,term=0,u = 0; 
    std::string frase = "";
    cout << "Digite uma frase: ";
    std::getline(cin, frase);
       for(int i = frase.length(); i >= 0; i = i - 1){
        u++;
         if (islower(frase[i])){
            minu++;
        }
        else if(isdigit(frase[i])){
             num++;

        }
         else if( isupper(frase[i])){
             maiu++;

         }
     }
  cout<<"Minusculas: "<<minu<<" "<<"Maiusculas:"<<maiu<<" "<< "Digitos: "<<num;
  return 0;
}




/*
 if (islower(inversa.push_back(frase[i]))){
            minu++;
        }
        else if( isdigit(inversa.push_back(frase[i]))){
            maiu++;

        }
        else if( isupper(inversa.push_back(frase[i]))){
            num++;

        }
    }
}

ou 


 term[1] = inversa.push_back(frase[i]);
        if (islower(term[i])){
            minu++;
        }
        else if( isdigit(term[i])){
            maiu++;

        }
        else if( isupper(term[i])){
            num++;


ou

if (islower(frase.pop_back(i))){
            minu++;
        }
        else if( isdigit(frase.push_back(i))){
            maiu++;

        }
        else if( isupper(frase.push_back(i))){
            num++;

        }



*/
