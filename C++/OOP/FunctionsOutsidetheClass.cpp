#include <iostream>
#include <vector>

class Preturi{
   public:
     std::vector<int> prices = {1, 5, 6, 45, 67};
     
   int thePrice();
};

int Preturi::thePrice(){
    int total = 0;
    for(int elem : prices){
       total += elem;
    }
    return total;
}

int main(){
    Preturi price;
    int rez = price.thePrice();
    std::cout << "Pret:" << rez << "\n";

    system("pause");
    return 0;
}