#include <iostream>

template <typename type>
auto max(type a, type b){
    return (a == b) ? true : false;
}

int main(){
    std::cout << max(4, 4);
    
    std::cout << std::endl;
    system("pause");
    return 0;
}

