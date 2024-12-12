#include <iostream>

bool isPalindrome(int x);

int main(){
    bool var = isPalindrome(-55);
    std::cout << var << '\n';
    system("pause");
    return 0;
}

bool isPalindrome(int x) {
    long long reverse = 0;
    long long original = x;
    while(x > 0){
        reverse = reverse * 10 + (x % 10);
        x /= 10;
    }
    return reverse == original;      
}