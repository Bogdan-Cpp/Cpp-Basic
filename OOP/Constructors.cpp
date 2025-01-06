#include <iostream>

class Dispozitive{
    public:
     std::string type;
     int year;
    
    Dispozitive(std::string type, int year){ //x , y;
        this->type = type; // type = x;
        this->year = year; // year = y;
    }
};

int main(){
    Dispozitive div1("PC", 1985); // x, y;
    
    std::cout << div1.type << " " << div1.year << "\n";

    system("pause");
    return 0;
}