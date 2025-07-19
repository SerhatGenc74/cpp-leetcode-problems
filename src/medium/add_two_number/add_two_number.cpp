#include <iostream>


struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        ListNode * dummyhead = new ListNode(0);
        ListNode * tail = dummyhead;
        int carry = 0;
        
        while(l1 != nullptr || l2 != nullptr || carry > 0)
        {
            
            int digit1 = (l1 != nullptr) ?  l1->val :  0;
            int digit2 = (l2 != nullptr) ?  l2->val :  0;
            
            int sum = digit1 + digit2 + carry;
            carry = sum / 10;
            int digit = sum % 10;
            tail->next = new ListNode(digit);
            tail = tail->next;
            
            // Move to the next nodes
            l1 = l1 != nullptr ? l1->next : nullptr;
            l2 = l2 != nullptr ? l2->next : nullptr;
        }
        
        ListNode * Result = dummyhead->next;

        delete dummyhead;

        return Result;
}

int main() {
    ListNode* l1 = new ListNode(2);
    l1->next = new ListNode(4);
    l1->next->next = new ListNode(3);

    ListNode* l2 = new ListNode(5);
    l2->next = new ListNode(6);
    l2->next->next = new ListNode(4);

    ListNode* result = addTwoNumbers(l1, l2);

    while (result != nullptr) {
        std::cout << result->val << " ";
        result = result->next;
    }
    
    return 0;
}
