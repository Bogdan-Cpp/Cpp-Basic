#include <iostream>
#include <vector>

std::vector<int> sortedList(std::vector<int> array1, std::vector<int> array2);

int main(){

    std::vector<int> array1 = {1, 4, 45, 32};
    std::vector<int> array2 = {3, 78, 90};
    
    std::vector<int> array = sortedList(array1, array2);

    for(int elements : array){
       
        std::cout << elements << " ";
    }
    
    std::cout << std::endl;
    system("pause");
    return 0;
}

std::vector<int> sortedList(std::vector<int> array1, std::vector<int> array2){

    std::vector<int> finalArray;
    int temp = 0;

    finalArray.insert(finalArray.end(), array1.begin(), array1.end());
    finalArray.insert(finalArray.end(), array2.begin(), array2.end());

    for(int i = 0; i < finalArray.size() - 1; i++){

        for(int j = 0; j < finalArray.size() - i - 1; j++){

            if(finalArray[j] > finalArray[j + 1]){

              temp = finalArray[j];
              finalArray[j] = finalArray[j + 1];
              finalArray[j + 1] = temp;
            }
        }
    }

    return finalArray;
}