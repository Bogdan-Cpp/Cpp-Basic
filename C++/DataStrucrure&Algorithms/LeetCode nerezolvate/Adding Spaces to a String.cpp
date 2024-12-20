#include <iostream>
#include <vector>

std::string addSpaces(std::string s, const std::vector<int> &spaces);

int main(){
   std::string var = addSpaces("spacing", {0, 1, 2, 3, 4, 5, 6});
   std::cout << var << '\n';

   system("pause");
   return 0;
}

std::string addSpaces(std::string s, const std::vector<int> &spaces) {
    for(int i = spaces.size() - 1; i >= 0; i--){
        int pos = spaces[i];
        if(pos >= 0 && pos <= s.size()){
            s.insert(s.begin() + pos, ' ');
        }
    }

    return s;
}