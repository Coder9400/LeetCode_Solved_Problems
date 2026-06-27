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
    int count(ListNode * root){
        int c = 0;
       ListNode * temp = root;
        while(temp!=nullptr){
            c++;
            temp = temp->next;
        }
        return c;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int c  = count(head);
        ListNode * root = head;
        c = c-n;
        if(c==0)
        {
            head = head->next;
            return head;
        }
        int f = 0;
        while(c!=1){
            c--;
            head = head->next;
            f=1;
        }
       
            if(head->next->next==nullptr) head->next = nullptr;
            else head->next = head->next->next;
        
        return root;
    }
};