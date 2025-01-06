#include <iostream>

struct Node{
   int value;
   Node *next;
};

void afisare(Node *curr);

int main(){
    Node *a = new Node();
    Node *b = new Node();
    Node *r = new Node();

    a->value = 12;
    a->next = r;
    
    r->value = 10;
    r->next = b;

    b->value = 20;
    b->next = nullptr;
    Node *curr = a;
    
    afisare(curr);

    Node *p = nullptr;
    Node *n = nullptr;
    curr = a;
    while(curr != nullptr){
        n = curr->next;
        curr->next = p;
        p = curr;
        curr = n;
    }
    curr = b;
    afisare(curr);
    delete a;
    delete b;
    
    system("pause");
    return 0;
}

void afisare(Node *curr){
    while(curr != nullptr){
        std::cout << curr->value << " ";
        curr = curr->next;
    }
    std::cout << '\n';
}