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
    ListNode* partition(ListNode* head, int x) {
        ListNode* root;
        root = head;
        vector<int> vec1, vec2;
        while (root != nullptr) {
            if (root->val < x) {
                vec1.push_back(root->val);
            }
            root = root->next;
        }
        root = head;
        while (root != nullptr) {
            if (root->val >= x) {
                vec2.push_back(root->val);
            }
            root = root->next;
        }
        head = nullptr;
        head = new ListNode(0);
        root = head;
        for (auto it : vec1) {
            head->next = new ListNode;
            head = head->next;
            head->val = it;
        }
        for (auto it : vec2) {
            head->next = new ListNode;
            head = head->next;
            head->val = it;
        }
        return root->next;
    }
};