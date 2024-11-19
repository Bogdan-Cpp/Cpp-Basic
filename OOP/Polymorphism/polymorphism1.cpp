#include <iostream>

class Forme{
   public:
    virtual void afisare(){
        std::cout << "Forma geometrica";
    }
};

class Cub : public Forme{
  public:
   void afisare() override{
       std::cout << "Cub";
   }
};

class Cerc : public Forme{
  public:
    void afisare() override{
        std::cout << "Cerc";
    }
};

int main(){
    Forme *forma1 = new Cub();
    Forme *forma2 = new Cerc();
    
    forma1->afisare();
    forma2->afisare();
    
    delete forma1;
    delete forma2;

    system("pause");
    return 0;
}