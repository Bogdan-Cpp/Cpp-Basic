#include <iostream>
#include <vector>

std::vector<int> intersect(const std::vector<int>& nums1, const std::vector<int>& nums2);

int main(){
    std::vector<int> var = intersect({1, 2, 2, 1}, {2});

    for(int i = 0; i < var.size(); i++){
        std::cout << var[i] << " ";
    }
    system("pause");
    return 0;
}

std::vector<int> intersect(const std::vector<int>& nums1, const std::vector<int>& nums2) {
    std::vector<int> lista;

    for(int i = 0; i < nums1.size(); i++){
        int target = nums1[i];
        for(int j = 0; j < nums2.size(); j++){
            if(target == nums2[j]){
               lista.push_back(target);
               break;
            }
        }
    }
    return lista;
}