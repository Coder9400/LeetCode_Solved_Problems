class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *temp;
        temp = new ListNode(0);
        ListNode *root;
        root = temp;
        int carry = 0;
        int sum;
        while(l1!=nullptr && l2!=nullptr){
            sum = l1->val + l2->val;
            temp->next = new ListNode;
            temp = temp->next;
            temp->val = sum%10+carry;
            carry = sum/10;
            l1 = l1->next;
            l2 = l2->next;
        }
        while(l1!=nullptr){
            sum = sum + l1->val;
            temp->next = new ListNode;
            temp = temp->next;
            temp->val = sum%10+carry;
            carry = sum/10;
            l1 = l1->next;
        }
        while(l2!=nullptr){
            sum = sum + l2->val;
            temp->next = new ListNode;
            temp = temp->next;
            temp->val = sum%10+carry;
            carry = sum/10;
            l2 = l2->next;
        }
        temp->next = nullptr;
        return root->next;
    }
};