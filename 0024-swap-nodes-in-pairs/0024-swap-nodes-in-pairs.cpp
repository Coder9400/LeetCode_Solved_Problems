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
    ListNode* swapPairs(ListNode* head) {
        if(head==nullptr || head->next==nullptr) return head;
        ListNode * root;
        root = new ListNode(0);
       root->next = head;
       ListNode *prev = root;
       while(head!=nullptr && head->next!=nullptr)
       {
            ListNode *nextt = head->next;
            ListNode *after = nextt->next;

            prev->next = nextt;
            nextt->next = head;
            head->next = after;

            prev = head;
            head = after;
       }
       return root->next;
    }
};