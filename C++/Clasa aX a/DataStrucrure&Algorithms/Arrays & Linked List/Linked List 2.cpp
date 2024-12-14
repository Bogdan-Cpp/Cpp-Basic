#include <iostream>

struct Node{
    int num;
    Node *next;
};

int main(){
    Node *first = new Node();
    Node *second = new Node();
    Node *third = new Node();

    first->num = 2;
    first->next = second;

    second->num = 5;
    second->next = third;

    third->num = 7;
    third->next = nullptr;
    
    Node *forth = new Node();
    forth->num = 45;
    forth->next = third;
    second->next = forth;
    
    Node *temp = first;
    while(temp != nullptr){
        std::cout << temp->num << " ";
        temp = temp->next;
    }
    std::cout << '\n';

    delete first;
    delete second;
    delete third;
    delete forth;

    system("pause");
    return 0;
}