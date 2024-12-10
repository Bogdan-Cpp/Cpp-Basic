#include <iostream>

struct Node{
   int value;
   Node *next;
};

int main(){
    Node *a = new Node();
    Node *b = new Node();
    Node *c = new Node();

    a->value = 12;
    a->next = b;

    b->value = 17;
    b->next = c;

    c->value = 9;
    c->next = nullptr;
    Node *curr = a;

    while(curr != nullptr){
        if(curr->value % 2 != 0){
            curr->value += 1;
            std::cout << curr->value << " ";
        }
        else{std::cout << curr->value <<" ";}
        curr = curr->next;
    }
    delete a;
    delete b;
    delete c;
    system("pause");
    return 0;
}