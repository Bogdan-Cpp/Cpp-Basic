#include <iostream>

struct Node{
   int value;
   Node *next;
};

int main(){
    Node *a = new Node();
    Node *b = new Node();

    a->value = 12;
    a->next = b;

    b->value = 20;
    b->next = nullptr;

    Node *temp = b;

    while(temp != a->value){
        std::cout << 
        temp = temp->next;
    }
    std::cout << '\n';

    delete a;
    delete b;
    
    system("pause");
    return 0;
}