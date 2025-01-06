#include <iostream>

class Obiect{
    public:
      std::string type;
      std::string functie;
    Obiect() {}
    Obiect(std::string type, std::string functie){
        this->type = type;
        this->functie = functie;
    }
    void afisare(){
        type = "Creion";
        functie = "a scrie";

        std::cout << "Obiect " << type << " are functia de " << functie << "\n";
    }
};

int main(){
   Obiect obc; //obc.("Creion", "a scrie");
   obc.afisare();
   
   system("pause");
   return 0;
}