#include <iostream>
#include <vector>
#include <cmath>

bool judgeSquareSum(int c);
bool isPerfect(int n);

int main(){
    bool var = judgeSquareSum(1000000000);
    std::cout << var << '\n';
    system("pause");
    return 0;
}

bool judgeSquareSum(int c) {
    std::vector<long long> lista;

    for(int i = 0; i <= c; i++){
        if(isPerfect(i)){
            lista.push_back(i);
        }
    }
    for(int j = 0; j < lista.size(); j++){
        for(int x = 0; x < lista.size(); x++){
           if(lista[j] + lista[x] == c){
             return true;
           }
        }
    }
    return false;
}

bool isPerfect(int n){
   int tot = 0;

   for(int j = sqrt(n) - 1; j < sqrt(n) + 1; j++){
        tot = j * j;
        if(tot == n){
            return true;
        }
    }
    return false;
}