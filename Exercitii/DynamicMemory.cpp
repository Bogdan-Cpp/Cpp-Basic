#include <iostream>
#include <vector>

int main(){
    int item;
   
    std::cout << "Cate numere adaugi?";
    std::cin >> item;
    
    std::vector<int*> adrese;
    int *elem = new int[item];
    for(int i = 1; i <= item; i++){
        std::cout << "Element: ";
        std::cin >> *elem;
        adrese.push_back(&elem[i]);
    }
    
    for(int* adresa : adrese){
        std::cout << adresa << " ";
    }

    delete[] elem;
    
    std::cout << std::endl;
    system("pause");
    return 0;
}