#include <iostream>

class Car{
    public:
      std::string model;
      int year;
    
    Car(std::string model, int year);
};

Car::Car(std::string model, int year){
    this->model = model;
    this->year = year;
}

int main(){
    Car car("Tesla", 2015);
    std::cout << car.model << " " << car.year << "\n";
    
    system("pause");
    return 0;
}