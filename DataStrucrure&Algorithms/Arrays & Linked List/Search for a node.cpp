#include <iostream>

struct Node{
   int value;
   Node *next;
};

void addNode(Node *&head, int data);
void deleteNode(Node *&head);

int main(){
    int count = 0;
    int search = 34;
    Node *head = nullptr;
    addNode(head, 57);
    addNode(head, 8);
    addNode(head, 34);
    addNode(head, 90);

    Node *curr = head;
    while(curr != nullptr){
        count += 1;
        if(curr->value == search){
            std::cout << curr->value << " gasit la pozitia: " << count;
        }
        curr = curr->next;
    }
    deleteNode(head);
    std::cout << '\n';
    system("pause");
    return 0;
}

void addNode(Node *&head, int data){
    Node *node = new Node();
    node->value = data;
    node->next = head;
    head = node;
}

void deleteNode(Node *&head){
    Node *curr = head;
    while(curr != nullptr){
        Node *temp = curr;
        curr = curr->next;
        delete temp;
    }
}