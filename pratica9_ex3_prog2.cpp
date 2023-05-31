#include <iostream>
#include <unordered_map>
#include <vector>

int main() {
  int n, x;
  std::unordered_map<int, int> tab;
  std::vector<int> moda;
  std::cout << "Digite um inteiro: ";
  std::cin >> n;

  std::cout << "Digite os " << n << " numeros: ";
  for (int i = 0; i < n; i++) {
    std::cin >> x;
    tab[x]++;
  }

  int max_tab = 0;
  for (auto it : tab) {
    if (it.second > max_tab) {
      max_tab = it.second;
      moda.clear();
      moda.push_back(it.first);
    } else if (it.second == max_tab) {
      moda.push_back(it.first);
    }
  }

  if (moda.size() == 1) {
    std::cout << "Moda: " << moda[0] << std::endl;
  } else {
    std::cout << "Nao ha moda";
  }
}