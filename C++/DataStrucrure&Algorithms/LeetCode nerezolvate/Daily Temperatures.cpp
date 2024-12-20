#include <iostream>
#include <vector>

std::vector<int> dailyTemperatures(const std::vector<int>& temperatures);

int main(){
    std::vector<int> var = dailyTemperatures({73, 74, 75, 71, 69, 72, 76, 73});
    for(int i = 0; i < var.size(); i++){
        std::cout << var[i] << " ";
    }
    system("pause");
    return 0;
}

std::vector<int> dailyTemperatures(const std::vector<int>& temperatures) {
    std::vector<int> days(temperatures.size(), 0);
    
    for(int i = 0; i < temperatures.size(); i++){
        int count = 0;
        bool isGrater = false;

        for(int j = i + 1; j < temperatures.size(); j++){
            count += 1;
            if(temperatures[i] < temperatures[j]){
                days[i] = count;
                break;
            }
        }
    }
    return days;
}