#include <iostream>
#include <vector>

void Tabla(char tabla[3][3]);
void conditionCeck(int row, int col);
void playerX(int row, int col, char simbol, char tabla[3][3]);
void player0(int row, int col, char simbol, char tabla[3][3]);
int isWin(char tabla[3][3]);

int main(){
    int row;
    int col;
    char simbol;
    char tabla[3][3] = {{'1', '2', '3'},
                        {'4', '5', '6'},
                        {'7', '8', '9'}};
    do{
       Tabla(tabla);
       playerX(row, col, simbol, tabla);
       int win1 = isWin(tabla);
       if(win1 == 2){
         std::cout << "X a castigat! \n";
         Tabla(tabla);
         break;
       }
       if(win1 == 2){
         std::cout << "0 a castigat! \n";
         Tabla(tabla);
         break;
       }
       Tabla(tabla);
       player0(row, col, simbol, tabla);
       int win2 = isWin(tabla);
       if(win2 == 2){
         std::cout << "X a castigat! \n";
         Tabla(tabla);
         break;
       }
       if(win1 == 2){
         std::cout << "0 a castigat! \n";
         Tabla(tabla);
         break;
       }
    }while(true);
   

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

void playerX(int row, int col, char simbol, char tabla[3][3]){
   std::cout << "Rand: ";
   std::cin >> row;

   std::cout << "Coloana: ";
   std::cin >> col;
   conditionCeck(row, col);
   if(tabla[row][col] == 'x' || tabla[row][col] == '0'){
        std::cout << "Pozitie ocupata \n";
    }
    else{
        std::cout << "Miscare (X): "; 
        std::cin >> simbol;
      if(simbol != 'x'){
        std::cout << "Simbol incorect \n";
        playerX(row, col, simbol, tabla);
      }
  
      else{tabla[row][col] = simbol;}
    }
   
}

void player0(int row, int col, char simbol, char tabla[3][3]){
   std::cout << "Rand: ";
   std::cin >> row;

   std::cout << "Coloana: ";
   std::cin >> col;
   conditionCeck(row, col);
   if(tabla[row][col] == 'x' || tabla[row][col] == '0'){
        std::cout << "Pozitie ocupata \n";
    }
   else{
       std::cout << "Miscare (0): "; 
       std::cin >> simbol;
     if(simbol != '0'){
       std::cout << "Simbol incorect \n";
       player0(row, col, simbol, tabla);
     }
     else{tabla[row][col] = simbol;}
   }
}

int isWin(char tabla[3][3]){
    //pentru X
    // orizontal
    if(tabla[0][0] == 'x' && tabla[0][1] == 'x' && tabla[0][2] == 'x') return 2;
    if(tabla[1][0] == 'x' && tabla[1][1] == 'x' && tabla[1][2] == 'x') return 2;
    if(tabla[2][0] == 'x' && tabla[2][1] == 'x' && tabla[2][2] == 'x') return 2;
    //vertical
    if(tabla[0][0] == 'x' && tabla[1][0] == 'x' && tabla[2][0] == 'x') return 2;
    if(tabla[0][1] == 'x' && tabla[1][1] == 'x' && tabla[2][1] == 'x') return 2;
    if(tabla[0][2] == 'x' && tabla[1][2] == 'x' && tabla[2][2] == 'x') return 2;
    //oblig
    if(tabla[0][0] == 'x' && tabla[1][1] == 'x' && tabla[2][2] == 'x') return 2;
    if(tabla[2][0] == 'x' && tabla[1][1] == 'x' && tabla[0][2] == 'x') return 2;

    //pentru 0
    // orizontal
    if(tabla[0][0] == '0' && tabla[0][1] == '0' && tabla[0][2] == '0') return 3;
    if(tabla[1][0] == '0' && tabla[1][1] == '0' && tabla[1][2] == '0') return 3;
    if(tabla[2][0] == '0' && tabla[2][1] == '0' && tabla[2][2] == '0') return 3;
    //vertical
    if(tabla[0][0] == '0' && tabla[1][0] == '0' && tabla[2][0] == '0') return 3;
    if(tabla[0][1] == '0' && tabla[1][1] == '0' && tabla[2][1] == '0') return 3;
    if(tabla[0][2] == '0' && tabla[1][2] == '0' && tabla[2][2] == '0') return 3;
    //oblig
    if(tabla[0][0] == '0' && tabla[1][1] == '0' && tabla[2][2] == '0') return 3;
    if(tabla[2][0] == '0' && tabla[1][1] == '0' && tabla[0][2] == '0') return 3;
    return 0;
}