#include <iostream>
#include <vector>

int main(){

    std::vector<std::string> word = {"programare"};
    std::string afterWord;

    for(int i = 0; i < word[0].length(); i++){

        if(i % 2 == 0){

            afterWord += std::toupper(word[0][i]);
        }

        else{

            afterWord += word[0][i];
        }
    }

    std::cout << afterWord << std::endl;
    
    system("pause");
    return 0;
}