#include <iostream>

int factorial(int n);

int main(){
   
    int* n = new int;
    std::cin >> *n;
    
    if(*n > 1000){
        throw std::invalid_argument("NUMAR PREA MARE!");
    }
    std::cout << factorial(*n);
    delete n;
    std::cout << std::endl;
    system("pause");
    return 0;
}

int factorial(int n){
    int total = 1;
    if(n > 1){
       return n * factorial(n - 1);
    }
    else{
        return 1;
    }
}