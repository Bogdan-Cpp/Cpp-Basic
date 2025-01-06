#include <iostream>
#include <stack>

int main(){
    std::stack<int> cos;
    int tot = 0;

    cos.push(67);
    cos.push(45); 
    cos.push(23);
    cos.push(130);
    
    while(!cos.empty()){
        tot += cos.top();
        cos.pop();
    }
    std::cout << "Totalul este: " << tot << '\n';

    system("pause");
    return 0;
}