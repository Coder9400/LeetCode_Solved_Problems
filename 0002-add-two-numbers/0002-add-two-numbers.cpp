/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *root,*head;
        root = new ListNode;
        root->val = 0;
        head = root;
        int val;
        int carry = 0;
        while(l1!=nullptr && l2!=nullptr){
            val = l1->val + l2->val + carry;
            carry = val/10;
            root->next = new ListNode;
            root = root->next;
            root->val = val%10;
            l1 = l1->next;
            l2 = l2->next;
        }
        while(l1!=nullptr)
        {
            val = l1->val + carry;
            root->next = new ListNode;
            root = root->next;
            carry = val/10;
            root->val = val%10;
            l1 = l1->next;
        }
        while(l2!=nullptr)
        {
            val = l2->val + carry;
            root->next = new ListNode;
            root = root->next;
            root->val = val%10;
            carry = val/10;
            l2 = l2->next;
        }
        if(carry!=0)
        {
            root->next = new ListNode;
            root = root->next;
            root->val = carry;
        }
        root->next = nullptr;
        return head->next;
    }
};