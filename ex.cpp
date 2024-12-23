#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>

bool isPerfect(int n);

int main(){
  int c = 4;
  std::vector<int> lista;

  for(int i = 0; i < c; i++){
    if(isPerfect(i)){
      lista.push_back(i);
    }
  }

  for(int j = 0; j <= lista.size(); j++){
    std::cout << lista[j] << " ";
  }
  
  system("pause");
  return 0;
}

bool isPerfect(int n){
   for(int i = sqrt(n) - 1; i < sqrt(n) + 1; i++){
        int tot = i * i;
        if(tot == n){
            return true;
        }
    }
    return false;
}