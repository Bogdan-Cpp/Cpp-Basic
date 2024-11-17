//using dynamic memory
#include <iostream>

struct Node{
    int value;
    Node *next;
};


int main(){
    Node *first = new Node;
    Node *second = new Node;

    first->value = 1;
    first->next = second;

    second->value = 2;
    second->next = nullptr;
    
    Node *current = first;
    while(current != nullptr){
       std::cout << current->value << std::endl;
       current = current->next;
    }

    delete first;
    delete second;
    delete current;

    system("pause");
    return 0;
}