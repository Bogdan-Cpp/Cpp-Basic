#include <iostream>

int main(){

    std::string name = "Bogdan";

    std::string *pName = &name;

    std::cout << *pName;

    std::cout << std::endl;
    system("pause");
    return 0;
}