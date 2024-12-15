#include <iostream>
#include <stack>

int main(){
    std::stack<int> st;
    std::stack<int> numbers;

    st.push(12);
    st.push(3);

    int size_st = st.size();
    int size_numbers = numbers.size();

    if(st.empty()) {std::cout << "The stack is empty!" << '\n';}
    else {std::cout << "The size of teh Stack is: " << size_st << '\n';}

    if(numbers.empty()) {std::cout << "The stack is empty!" << '\n';}
    else {std::cout << "The size of teh Stack is: " << size_st << '\n';}
    
    system("pause");
    return 0;
}
