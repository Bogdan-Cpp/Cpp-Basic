#include <iostream>

struct ListNode{
    int val;
    ListNode *next;
};

bool isPalindrome(ListNode* head);
void addNode(ListNode *&head, int data);

int main(){
    ListNode *head = nullptr;

    addNode(head, 1);
    addNode(head, 2);
    addNode(head, 2);
    addNode(head, 7);
    
    std::cout << "LinkedList: ";

    ListNode *curr = head;
    while(curr != nullptr){
        std::cout << curr->val << " ";
        curr = curr->next;
    }
    bool var = isPalindrome(head);

    std::cout << '\n';
    std::cout << var << " ";

    system("pause");
    return 0;
}

void addNode(ListNode *&head, int data){
    ListNode *curr = new ListNode();
    
    curr->val = data;
    curr->next = head;
    head = curr;
}

bool isPalindrome(ListNode* head){
   ListNode *curr = head;
   long long half1 = 0;
   long long count = 0;
   
   while(curr != nullptr){
       count += 1;
       curr = curr->next;
   }
   
   half1 = count % 2;

   if(count % 2 == 0){
       curr = head;
       int val1 = 0;
       int val2 = 0;
       int count2 = 0;

       while(curr != nullptr){
           if(count2 < half1){
              val1 = val1 * 10 + curr->val;
              curr = curr->next;
           }
           else{
              val2 = val2 * 10 + curr->val;
              curr = curr->next;
           }
       }

       int invers = 0;
       while(val2 > 0){
           invers = (invers * 10) + (val2 % 10);
           val2 /= 10;
       }

       return val1 == val2;
   }
   return false;
}