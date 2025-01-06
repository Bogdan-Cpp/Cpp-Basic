#include <iostream>

struct persoana{
    std::string name = "Bogdan";
    int age = 16;
    bool isProgramer = true;
};

int main(){
    persoana item;
    
    item.name;
    item.age;
    item.isProgramer;

    std::cout << item.name << std::endl;
    std::cout << item.age << std::endl;
    std::cout << item.isProgramer;

    std::cout << std::endl;
    system("pause");
    return 0;
}