#include <iostream>
#include <algorithm>

std::string addBinary(std::string a, std::string b);

int main(){
    std::string num = addBinary("11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111", "1");
    std::cout << num << " ";

    system("pause");
    return 0;
}

std::string addBinary(std::string a, std::string b) {
    __int128 decimal1 = 0;
    __int128 decimal2 = 0;
    __int128 tot = 0;
    
    if(a == "0" && b == "0"){
        return "0";
    }
    for(char bit1 : a){
       decimal1 = (decimal1 << 1) | (bit1 - '0');
    }

    for(char bit2 : b){
        decimal2 = (decimal2 << 1) | (bit2 - '0');
    }
    tot = decimal1 + decimal2;
    std::string binar = "";
    __int128 count = 
    while(tot > 0){
       if(tot % 2 == 0){
         binar += '0';
       }
       else{
        binar += '1';
       }
       tot /= 2;
    }
    return binar;
}