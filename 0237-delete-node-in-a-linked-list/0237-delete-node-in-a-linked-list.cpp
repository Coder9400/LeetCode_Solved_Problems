/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        vector<int> it;
        ListNode* head;
        head = node;
        head = head->next;
        while (head != nullptr) {
            it.push_back(head->val);
            head = head->next;
        }
        head = node;
        ListNode* temp;
        for (int i : it) {
            head->val = i;
            temp = head;
            head = head->next;
        }
        temp->next = nullptr;
    }
};