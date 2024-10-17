#include <iostream>
#include <cmath>

int ariaPatrat();
int ariaDreptunghi();
int ariaCerc();

int main(){
    int alegere;

    std::cout << "1.Aria Patratului" << std::endl;
    std::cout << "2.Aria Dreptunghiului" << std::endl;
    std::cout << "3.Aria cercului" << std::endl;

    std::cout << "Alegerea ta: ";
    std::cin >> alegere;

    switch(alegere){

        case 1: {
          int patrat = ariaPatrat();
          std::cout << patrat << std::endl;
          break;
        }
          

        case 2: {
          int dreptunghi = ariaDreptunghi();
          std::cout << dreptunghi << std::endl;
          break;
        }
          

        case 3: {
          int patrat2 = ariaCerc();
          std::cout << patrat2 << std::endl;
          break;
        }
          
    }

    system("pause");
    return 0;
}

int ariaPatrat(){
  
  int l;
  int total;
  std::cout << "Latura: ";
  std::cin >> l;
  total = pow(l, 2);

   return total;
}

int ariaDreptunghi(){

  int l;
  int L;
  int total;
  std::cout << "Lungime: ";
  std::cin >> L;
  std::cout << "latime: ";
  std::cin >> l;
  total = L * l;

   return total;
}

int ariaCerc(){

    int r;
    int total;
    std::cout << "Raza:";
    std::cin >> r;
    total = pow(r, 2);

    return total;
}