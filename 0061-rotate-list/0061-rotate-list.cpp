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
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == nullptr)
            return head;
        int arr[501];
        int a = 0;
        ListNode* temp;
        temp = head;
        while (temp != nullptr) {
            arr[a] = temp->val;
            temp = temp->next;
            a++;
        }
        k = k % a;
        for (int i = 0; i < k; i++) {
            int d = arr[a - 1];
            int f = arr[0];
            for (int j = 1; j < a; j++) {
                int h = arr[j];
                arr[j] = f;
                f = h;
            }
            arr[0] = d;
        }
        ListNode* root;
        root = new ListNode(0);
        temp = root;
        for (int i = 0; i < a; i++) {
            root->next = new ListNode;
            root = root->next;
            root->val = arr[i];
        }
        root->next = nullptr;
        return temp->next;
    }
};