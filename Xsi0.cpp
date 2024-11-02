#include <iostream>
#include <vector>

int main(){
    int row;
    int col;
    char simbol;
    char  tabla[3][3] = {{'1', '2', '3'},
                        {'4', '5', '6'},
                        {'7', '8', '9'}};
    
    
    std::cout << "Rand: ";
    std::cin >> row;

    std::cout << "Coloana: ";
    std::cin >> col;

    std::cout << "Miscare (X): ";
    std::cin >> simbol;
    tabla[row][col] = simbol;
    
   for(int i = 0; i < 3; i++){
       for(int j = 0; j < 3; j++){
           std::cout << tabla[i][j] << " ";
       }
       std::cout << std::endl;
   }
    std::cout << std::endl;
    system("pause");
    return 0;
}