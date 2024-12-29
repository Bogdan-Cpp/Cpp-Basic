#include <iostream>

class Node{
    public:
      int val;
      Node *next;
};

int main(){
    Node *first = new Node();
    Node *second = new Node();
    Node *third = new Node();

    first->val = 34;
    first->next = second;

    second->val = 44;
    second->next = third;

    third->val = 54;
    third->next = nullptr;
    
    Node *curr = first;
    while(curr != nullptr){
        std::cout << curr->val << " ";
        curr = curr->next;
    }

    system("pause");
    return 0;
}