#include <iostream>
#include <vector>

int acumular(std::vector<int> &v)
{
    int soma = 0;
    for (int ite : v)
    {
        soma += ite;
    }
    for (int ite : v)
    {
        ite = soma;
    }
    return soma;
}
int main()
{
    std::cout << "Digite um inteiro: ";
    int n=0;
    std::cin >> n;
    std::vector<int> v(n);
    for (auto it = v.begin(); it != v.end(); ++it)
    {   
       
        std::cin >> (*it);
       
        
    }
    std::cout << "Soma: " << acumular(v) << std::endl;
    std::cout << "Itens no container: " << std::endl;
    for (int i : v)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}

//for(auto it = v.begin(); it != v.end(); ++it){
//std::cout << (*it) << std::endl;