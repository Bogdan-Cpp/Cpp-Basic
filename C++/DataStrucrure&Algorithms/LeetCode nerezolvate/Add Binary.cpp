#include <iostream>
#include <algorithm>
#include <stack>

std::string addBinary(std::string a, std::string b);

int main(){
    std::string num = addBinary("11", "1");
    std::cout << num << " ";

    system("pause");
    return 0;
}

std::string addBinary(std::string a, std::string b) {
    std::stack<std::string> lista;
    std::string word = "";
    long long count1 = a.length() - 1;
    long long count2 = b.length() - 1;

    while(count1 - 1 > a.length() - (a.length() - 1)){
        int first = a[count1];
        int second = b[count2];
        int carry;
        
        if(a == "0" && b == "1" || a == "1" && b == "0"){
            lista.push("1");
        }
        else if(a == "0" && b == "0"){
            lista.push("0");
        }
        else if(a == "1" && b == "0"){
            lista.push("0");
        }
    }
    while(!lista.empty()){
        word += lista.top();
        lista.pop();
    }
    return word;
}