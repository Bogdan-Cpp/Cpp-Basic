#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_map<std::string, int> list = {{"Bogdan", 17}, {"Ion", 18}}; // ✅ Folosește acolade {}
    
    list["Alex"] = 16;
    

    for (const auto& key : list) {
        if(key.first == "Bogdan"){
            std::cout << key.first << " " << key.second << std::endl;
        }
    }
    return 0;
}