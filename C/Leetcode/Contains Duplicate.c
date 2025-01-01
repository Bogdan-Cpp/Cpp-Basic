#include <stdio.h>
#include <stdbool.h>

bool containsDuplicate(int* nums, int numsSize);

int main(){sdfdf
    int nums[] = {29995,29996,29997,29998,29999};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    bool isValid = containsDuplicate(nums, numsSize);
    printf("%d\n", isValid);
    
    getchar();
    return 0;
}
dsfdsf
bool containsDuplicate(int* nums, int numsSize) {
    for(int i = 0; i < numsSize; i++){
        for(int j = i + 1; j < numsSize; j++){
            if(nums[i] == nums[j]){return true;}
        }
    }
    return false;
}