#include <iostream>
#include <vector>
int acumular(std::vector<int> *v)
{
    int soma = 0;
    for (int i = 0; i < (*v).size(); i++)
    {
        soma += (*v)[i];
    }
    for (int i = 0; i < (*v).size(); i++)
    {
        (*v)[i] = soma;
    }
    return soma;
}
int main()
{
    std::cout << "Digite um inteiro: ";
    int n;
    std::cin >> n;
    std::vector<int> v(n, 0);
    for (auto it = v.begin(); it != v.end(); ++it)
    {   
       
        std::cin >> (*it);
       
        
    }

      for (auto it = v.begin(); it != v.end(); ++it)
    {   
        std::cout << (*it) << std::endl;
        
        
    }


    std::cout << "Soma: " << acumular(&v) << std::endl;
    std::cout << "Itens no container: " << std::endl;
    for (int i : v)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}