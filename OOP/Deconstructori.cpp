#include <iostream>

class Object{
   public:
      bool *isAlive = nullptr;
    
    void nastere(){
        isAlive = new bool(true);
        std::cout << "Oboectul a fost creat -> isAlive: " << *isAlive << std::endl;
    }
    ~Object(){
        std::cout << "Obiect distrus -> isAlive: " << *isAlive;
        delete isAlive;
        isAlive = nullptr;
        std::cout << isAlive;
    }
};

int main(){
  {
    Object obj;
    obj.nastere();
  }
    std::cout << std::endl;
    system("pause");
    return 0;
}

//~Object este un DESTRUCTOR care se ocupa cu eliberarea memoriei dinamice a obiectelor din clasa
//Ce nu poate face un destructor: 
// -nu poate returna nimic
// -nu poate lua argumente
// -nu poate fi apelat direct