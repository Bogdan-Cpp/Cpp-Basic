#include <iostream>

struct Node{
    int value;
    Node *next;
};

int main(){
    int val1;
    int val2;
    Node *a = new Node();
    Node *b = new Node();
    Node *c = new Node();
    Node *d = new Node();

    a->value = 12;
    a->next = b;

    b->value = 2;
    b->next = c;

    c->value = 34;
    c->next = d;

    d->value = 89;
    d->next = nullptr;

    Node *curr = a;
    Node *n = b;
    while(curr != nullptr && n != nullptr){
       val1 = curr->value;
       val2 = n->value;

       if(val1 > val2){std::cout << val1 << " ";}
       else{std::cout << val2 << " ";}
       curr = curr->next;
       n = n->next;
    }
    delete a;
    delete b;
    delete c;
    delete d;

    system("pause");
    return 0;
}