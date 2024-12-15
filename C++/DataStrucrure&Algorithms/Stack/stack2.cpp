#include <iostream>
#include <stack>

int main(){
   std::stack<std::string> st;

   st.push("Bogdan");
   st.push("Alex");
   st.push("Ovidiu");

   while(!st.empty()){
      std::cout << st.top() << '\n';
      st.pop();
   }
   return 0;
}

