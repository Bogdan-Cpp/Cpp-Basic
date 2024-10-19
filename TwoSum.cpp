#include <iostream>
#include <vector>

int main(){
    std::vector<int> numbers = {3, 4, 7};
    int target;
    int myNum = 11;

    for(int i = 0; i < numbers.size(); i++){

        for(int j = 0; j < numbers.size(); j++){

            target = numbers[i] + numbers[j];

            if(target == myNum){

                std::cout << i << " " << j;
            }
        }
    }

    std::cout << std::endl;

    system("pause");
    return 0;
}

