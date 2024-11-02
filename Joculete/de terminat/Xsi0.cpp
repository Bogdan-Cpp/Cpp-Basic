#include <iostream>
#include <vector>

void Tabla(char tabla[3][3]);
void conditionCeck(int row, int col);

int main(){
    int row;
    int col;
    char simbol;
    char tabla[3][3] = {{'1', '2', '3'},
                        {'4', '5', '6'},
                        {'7', '8', '9'}};
    
    Tabla(tabla);
    
    std::cout << "Rand: ";
    std::cin >> row;

    std::cout << "Coloana: ";
    std::cin >> col;
    std::cout << "Miscare (X): ";
    std::cin >> simbol;
    
    conditionCeck(row, col);
   
    tabla[row][col] = simbol;
    
    Tabla(tabla);

    std::cout << std::endl;
    system("pause");
    return 0;
}

void Tabla(char tabla[3][3]){
   for(int i = 0; i < 3; i++){
       for(int j = 0; j < 3; j++){
           std::cout << tabla[i][j] << " ";
       }
       std::cout << std::endl;
   }
}

void conditionCeck(int row, int col){
    if(row > 2 || row < 0 && col > 2 || col < 0){
        std::cout << "Pozitia ta nu este corecta!" << std::endl;
    }
}