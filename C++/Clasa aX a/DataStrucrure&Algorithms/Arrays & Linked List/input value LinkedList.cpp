#include <iostream>

struct Node{
   int value;
   Node *next;
};

int main(){
    int node1;
    int node2;

    std::cin >> node1;
    std::cin >> node2;

    Node *a = new Node();
    Node *b = new Node();
    
    a->value = node1;
    a->next = b;

    b->value = node2;
    b->next = nullptr;
    
    Node *curr = a;
    while(curr != nullptr){
        std::cout << curr->value << " ";
        curr = curr->next;
    }
    delete a;
    delete b; 
    system("pause");
    return 0;
}