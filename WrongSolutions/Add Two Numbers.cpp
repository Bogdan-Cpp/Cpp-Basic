#include <iostream>

struct ListNode{
    int val;
    ListNode *next;
};

void addNode1(ListNode *&l1, int data);
void addNode2(ListNode *&l2, int data);
ListNode *addTwoNumbers(ListNode *&l1, ListNode *&l2);

int main(){
    ListNode *l1 = nullptr;
    ListNode *l2 = nullptr;
    
    addNode1(l1, 9);
    addNode1(l1, 4);
    addNode1(l1, 2);

    addNode2(l2, 9);
    addNode2(l2, 4);
    addNode2(l2, 6);
    addNode2(l2, 5);
    
    ListNode *var = addTwoNumbers(l1, l2);
    while(var != nullptr){
        std::cout << var->val << " ";
        var = var->next;
    }
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
    ListNode *rezult = nullptr;
    long long rez1 = 0;
    long long rez2 = 0;
    long long tot = 0;

    ListNode *curr1 = l1;
    while(curr1 != nullptr){
        rez1 = rez1 * 10 + curr1->val;
        curr1 = curr1->next;
    }
    curr1 = l2;
    while(curr1 != nullptr){
        rez2 = rez2 * 10 + curr1->val;
        curr1 = curr1->next;
    }

    if(rez1 == 0 && rez2 == 0){
      ListNode *rezultat = new ListNode();
      rezultat->val = 0;
      rezultat->next = nullptr;
      return rezultat;
    }
    tot = rez1 + rez2;
    long long data = 0;
    
    while(tot > 0){
      data = tot % 10;
      ListNode *currrez = new ListNode();
      currrez->val = data;
      currrez->next = rezult;
      rezult = currrez;
      tot /= 10;
    }
    ListNode *c = rezult;
    ListNode *n = nullptr;
    ListNode *p = nullptr;

    while(c != nullptr){
      n = c->next;
      c->next = p;
      p = c;
      c = n;
    }
    return p;
}