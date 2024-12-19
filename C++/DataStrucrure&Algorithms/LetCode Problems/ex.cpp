#include <iostream>
#include <vector>

int main(){
    std::string prop = "invat";
    std::vector<std::string> lista;
    std::string word = "";

    for (char c : prop) {
        lista.push_back(std::string(1, c)); 
    }

    for (int j = 0; j < lista.size(); j++) {
        if (j == 3) {
            lista[j] = " "; 
        }
    }
    for(std::string a : lista){
        word += a;
    }
    std::cout << word << '\n';
    std::cout << std::endl;

    system("pause");
    return 0;
}