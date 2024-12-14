#include <iostream>

class Forme{
   public:
    virtual void afisare(){   //'virtual' permite ca functia sa fie suprascrisa
        std::cout << "Forma geometrica";
    }
};

class Cub : public Forme{
  public:
   void afisare() override{ // override indica faptul ca functia poate fi suprascrisa
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
    Forme *forma1 = new Cub(); // chemam obiectele cu pointeri
    Forme *forma2 = new Cerc();
    
    forma1->afisare();  // initializam cu '->' pentru ca 'forma' este un pointer
    forma2->afisare();
    
    delete forma1;   // curatam memoria dupa ce nu mai avem devoie de el
    delete forma2;

    system("pause");
    return 0;
}