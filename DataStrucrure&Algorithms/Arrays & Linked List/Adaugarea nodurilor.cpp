#include <iostream>

struct Node{
   int value;
   Node *next;
};

void addNode(Node *&head, int data);
void deleteNode(Node*&head);

int main(){
    Node *head = nullptr;

    addNode(head, 12);
    addNode(head, 79);

    Node *curr = head;
    while(curr != nullptr){
        std::cout << curr->value << " ";
        curr = curr->next;
    }
    deleteNode(head);
    system("pause");
    return 0;
}

void addNode(Node *&head, int data){
    Node *node = new Node();
    node->value = data;
    node->next = head;
    head = node;
}

void deleteNode(Node*&head){
    Node *curr = head;
    while(curr != nullptr){
        Node *temp = curr;
        curr = curr->next;
        delete temp;
    }
    head = nullptr;
}