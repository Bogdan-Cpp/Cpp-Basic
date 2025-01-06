#include <iostream>

class Person{
  public:
    std::string name;
    std::string occupation;
    int age;
  
  void thePerson(){
    std::cin >> name;
    std::cin >> age;
    std::cin >> occupation;
  }

};

int main(){
    Person persoana;
    persoana.thePerson();

    std::cout << std::endl;
    system("pause");
    return 0;
}