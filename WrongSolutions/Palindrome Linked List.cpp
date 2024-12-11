#include <iostream>
#include <cmath>

struct ListNode{
   int val;
   ListNode *next;
};

void addNode(ListNode *&head, int data);
bool isPalindrome(ListNode *&head);
void deleteNode(ListNode *&head);

int main(){
    ListNode *head = nullptr;
    addNode(head, 1);
    addNode(head, 2);
    addNode(head, 2);
    addNode(head, 1);

    bool cond = isPalindrome(head);
    std::cout << cond <<'\n';

    deleteNode(head);
    system("pause");
    return 0;
}

void addNode(ListNode *&head, int data){
    ListNode *node = new ListNode();

    node->val = data;
    node->next = head;
    head = node;
}

bool isPalindrome(ListNode *&head) {
    long long num = 0;
    long long num2 = 0;
    ListNode *curr = head;

    while(curr != nullptr){
        num = num * 10 + curr->val;
        curr = curr->next;
    }
    long long num3 = num;

    while(num > 0){
        num2 = num2 * 10 + num % 10;
        num /= 10;
    }
    
    return num3 == num2;
}

void deleteNode(ListNode *&head){
    ListNode *curr = head;

    while(curr != nullptr){
        ListNode *temp = curr;
        curr = curr->next;
        delete temp;
    }
}