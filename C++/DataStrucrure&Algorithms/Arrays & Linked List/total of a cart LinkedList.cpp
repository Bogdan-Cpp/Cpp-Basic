#include <iostream>

struct Node{
   int value;
   Node *next;
};

int main(){
    int rez = 0;
    Node *pc = new Node();
    Node *laptop = new Node();
    Node *tastatura = new Node();

    pc->value = 2600;
    pc->next = laptop;

    laptop->value = 2700;
    laptop->next = tastatura;

    tastatura->value = 150;
    tastatura->next = nullptr;
    Node *curr = pc;
    while(curr != nullptr){
        rez += curr->value;
        curr = curr->next;
    }
    
    delete pc;
    delete laptop;
    delete tastatura;
    std::cout << "Total: " << rez << '\n';
    system("pause");
    return 0;
}