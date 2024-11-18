#include <iostream>

class Div{
   public:
    std::string type;
    int price;
    
    Div(std::string type, int price){
        this->type = type;
        this->price = price;
    }

    void setRef(){
        std::cout << type << std::endl;
        std::cout << price << std::endl;
    }
};

int main(){
    std::string name;
    int price;
    std::cin >> name;
    std::cin >> price;
    
    Div div(name, price);
    div.setRef();
    system("pause");
    return 0;
}