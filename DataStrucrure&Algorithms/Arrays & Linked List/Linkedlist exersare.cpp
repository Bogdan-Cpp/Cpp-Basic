#include <iostream>

struct Node{
    int value;
    Node *next;
};

int main(){
    int rez;
    Node *a = new Node();
    Node *b = new Node();
    Node *c = new Node();

    a->value = 5;
    a->next = b;

    b->value = 10;
    b->next = c;

    c->value = 22;
    c->next = nullptr;

    Node *curr = a;
    
    while(curr != nullptr){
       rez = curr->value;
       if(rez % 2 == 0){
         std::cout << rez << " ";
       }
       curr = curr->next;
    }
    delete a;
    delete b;
    delete c;

    system("pause");
    return 0;
}