#include <iostream>
#include <vector>
#include <algorithm>

int main(){
  std::vector<int> lista = {1, 1, 5, 2, 2};
  int count = 0;
  int curr = 0;
  int prev = 0;
  std::sort(lista.begin(), lista.end());

  while(count != (lista.size() - 1)){
    curr = lista[count];
    if(curr == prev){
      lista[count] = -1;
    }
    prev = curr;
    count++;
  }

  for(int i = 0; i < lista.size(); i++){
    std::cout << lista[i] << " ";
  }

  system("pause");
  return 0;
}