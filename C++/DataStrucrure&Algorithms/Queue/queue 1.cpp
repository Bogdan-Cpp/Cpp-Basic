#include <iostream>
#include <queue>

int main(){
    std::queue<int> lista;

    lista.push(1);
    lista.push(2);
    lista.push(3);
    
    lista.pop();
    std::cout << lista.front() << " " << lista.back() << '\n';
    system("pause");
    return 0;
}