#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> plusOne(std::vector<int> digits);

int main(){
    std::vector<int> rez = plusOne({1, 2, 3});
    std::vector<int> rez1 = plusOne({4, 3, 2, 1});
    std::vector<int> rez2 = plusOne({9, 9});

    for(int elem : rez2){
        std::cout << elem << " ";
    }
   
    system("pause");
    return 0;
}

std::vector<int> plusOne(std::vector<int> digits) {
    std::vector<int> lista;
    std::vector<int> lis;
    digits[digits.size() - 1] += 1;
    
    if(digits[digits.size() - 1] > 9){
        int var = digits[digits.size() - 1];
        digits.erase(std::remove(digits.begin(), digits.end(), digits[digits.size() - 1]), digits.end());
        while(var > 0){
            lis.push_back(var % 10);
            var /= 10;
        }
        std::reverse(lis.begin(), lis.end());
        digits.insert(digits.end(), lis.begin(), lis.end());
        return digits;
    }
    int num = 0;
    
    if(digits.size() == 1){
        for(int i = 0; i < digits.size(); i++){
           num = (num * 10) + digits[i];
        }
        while(num > 0){
           lista.push_back(num % 10);
           num /= 10;
        }
        std::reverse(lista.begin(), lista.end());
        return lista;
    }
    return digits;
}