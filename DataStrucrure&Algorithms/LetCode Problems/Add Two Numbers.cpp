#include <iostream>

struct ListNode{
    int val;
    ListNode *next;
};

void addNode1(ListNode *&l1, int data);
void addNode2(ListNode *&l2, int data);
ListNode *addTwoNumbers();

int main(){
    ListNode *l1 = nullptr;
    ListNode *l2 = nullptr;
    
    addNode1(l1, 3);
    addNode1(l1, 4);
    addNode1(l1, 2);

    addNode2(l2, 4);
    addNode2(l2, 6);
    addNode2(l2, 5);

    system("pause");
    return 0;
}

void addNode1(ListNode *&l1, int data){
    ListNode *curr = new ListNode();

    curr->val = data;
    curr->next = l1;
    l1 = curr;
}

void addNode2(ListNode *&l2, int data){
    ListNode *curr = new ListNode();

    curr->val = data;
    curr->next = l2;
    l2 = curr;
}

ListNode *addTwoNumbers(ListNode *&l1, ListNode *&l2) {
    ListNode *rezult = new ListNode();
    long long rez1;
    long long rez2;

    ListNode *curr1 = l1;
    while(l1 != nullptr){
        rez1 += curr1->val;
        curr1 = curr1->next;
    }

    return rezult;
}