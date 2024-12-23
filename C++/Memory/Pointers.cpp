#include <iostream>

int main(){
    int *val = new int(90);
    int *ptr = val;
   
    *val = 45;
    std::cout << *ptr << '\n';

    system("pause");
    return 0;
}