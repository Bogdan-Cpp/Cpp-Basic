#include <iostream>
#include <vector>
#include <string>

class Elevi{
    public:
      std::string name;
      int nota;
    
    Elevi() : name(""), nota(0) {}
    Elevi(std::string name, int nota){
       this->name = name;
       this->nota = nota; 
    }
};

class ListaElevi{
   public:
     std::vector<Elevi> lista;

    void addElevi(std::string nume, int nota){
        Elevi el(nume, nota);
        lista.push_back(el);
    }
    void afisare(std::string nume){
        for(const auto& el : lista){
            if(el.name == nume){
                std::cout << "Nume: " << el.name << " note: " << el.nota << std::endl;
            }
        }
    }
};

int main(){
  ListaElevi le;
  Elevi elv;
  int alg;
  int nota;
  std::string nume;
  std::string id;
    do{
      std::cout << "1. Adauga elev." << std::endl;
      std::cout << "2.Adauga nota." << std::endl;
      std::cout << "3.Vezi elevii." << std::endl;

      std::cin >> alg;
      switch(alg){
        case 1:{
          std::cin >> nume;
          std::cin >> nota;
          le.addElevi(nume, nota);
          break;
        }
        case 3:{
          std::cin >> id;
          le.afisare(id);
          break;
        }
      }
    }while(alg != 0);
    system("pause");
    return 0;
}