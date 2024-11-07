#include <iostream>

class Car{
   private:
     std::string model;
   public:

   void setCar(std::string masina){
     model = masina;
   }

   std::string getCar(){
     return model;
   }
};

int main(){
    Car car;
    car.setCar("Tesla");
    std::cout << car.getCar() << "\n";
    
    system("pause");
    return 0;
}