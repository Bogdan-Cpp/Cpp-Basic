#include <iostream>
#include <vector>
#include <algorithm>

std::vector<long long> plusOne(std::vector<int> digits);

int main(){
    std::vector<long long> rez = plusOne({1, 2, 3});
    std::vector<long long> rez1 = plusOne({7,2,8,5,0,9,1,2,9,5,3,6,6,7,3,2,8,4,3,7,9,5,7,7,4,7,4,9,4,7,0,1,1,1,7,4,0,0,6});
    std::vector<long long> rez2 = plusOne({9, 9});

    for(int elem : rez1){
        std::cout << elem << " ";
    }
   
    system("pause");
    return 0;
}

std::vector<long long> plusOne(std::vector<int> digits){
    std::vector<long long> lista;
    int num = 0;
    for(int i = 0; i < digits.size(); i++){
       num = (num * 10) + digits[i];
    }
    num = num + 1;
    while(num > 0){
        lista.push_back(num % 10);
        num /= 10;
    }
    std::reverse(lista.begin(), lista.end());
    return lista;
}